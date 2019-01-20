#include "tablasimbolos.h"
#include "Coline/Elementos/Elementos/elementoentorno.h"
#include "Coline/Elementos/Elementos/elementoclase.h"
#include <QStandardItemModel>
#include "ui_debugcoline.h"
#include "debugcoline.h"


#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"


void tablaSimbolos::sgb(QString inicio, QString tam, int nivel){
    linea("$$_SGC("+inicio+", "+tam+")",nivel);
}

void tablaSimbolos::limpiarAmbito(elementoEntorno *entor){
/*
    comentarioLinea("Limpiando ambito",entor->nivel);
    QString tempInicio=getEtiqueta();
    linea(tempInicio+" = P + " + QString::number(entor->tamEntornoAbsoluto()-entor->lstEntorno.count()),entor->nivel);
    sgb(tempInicio,QString::number(entor->lstEntorno.count()),entor->nivel);
*/
}


void tablaSimbolos::comentarioLinea(QString txt, int nivel){

    QString retorno="\n";
    for (int i = 0; i < nivel+1; ++i) {
        retorno+="\t";
    }

    retorno+="//-- "+txt+" --";
    nuevaLinea(retorno);

}


QString tablaSimbolos::getEtiqueta(){
    return "t"+QString::number(numEtiqueta++);
}

QString tablaSimbolos::getSalto(){
    return "L"+QString::number(numSalto++);
}


void tablaSimbolos::linea(QString txt, int nivel){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt+";";
    nuevaLinea(retorno);

}
void tablaSimbolos::linea(QString txt, int nivel, QString comentario){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt+";";
    retorno += "\t//"+comentario;
    nuevaLinea(retorno);
}

void tablaSimbolos::linea2(QString txt, int nivel){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt;
    nuevaLinea(retorno);

}
void tablaSimbolos::linea2(QString txt, int nivel, QString comentario){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt;
    retorno += "\t//"+comentario;
    nuevaLinea(retorno);
}


QString tablaSimbolos::getLinea(QString txt, int nivel){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt+";";
    return retorno;

}
QString tablaSimbolos::getLinea(QString txt, int nivel, QString comentario){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt+";";
    retorno += "\t//"+comentario;
    return retorno;
}

QString tablaSimbolos::getLinea2(QString txt, int nivel){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt;
    return retorno;
}
QString tablaSimbolos::getLinea2(QString txt, int nivel, QString comentario){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt;
    retorno += "\t//"+comentario;
    return retorno;
}


void tablaSimbolos::func_colocarParam(QString valor, int numParam, elementoEntorno *entor){
    QString param=QString::number(numParam);
    QString tam=QString::number(entor->tamEntornoAbsoluto());
    QString pivote=getEtiqueta();
    QString pos=getEtiqueta();

    this->linea(pivote+" = P + "+tam, entor->nivel);
    this->linea(pos+" = "+pivote+" + "+param, entor->nivel);
    this->linea("Stack["+pos+"] = "+valor, entor->nivel);

}

QString tablaSimbolos::func_llamarFuncRetorno(QString nombre, elementoEntorno *entor){
    QString retorno=getEtiqueta();
    QString tam=QString::number(entor->tamEntornoAbsoluto());
    linea("P = P + "+tam, entor->nivel);
    linea(nombre+"()", entor->nivel);
    linea(retorno+" = Stack[P]", entor->nivel, "retorno");
    linea("P = P - "+tam, entor->nivel);
    return retorno;
}

void  tablaSimbolos::func_llamarFunc(QString nombre, elementoEntorno *entor){
    QString tam=QString::number(entor->tamEntornoAbsoluto());
    linea("P = P + "+tam, entor->nivel);
    linea(nombre+"()", entor->nivel);
    linea("P = P - "+tam, entor->nivel);
}


void tablaSimbolos::incrementarHeap(elementoEntorno *entor){
    linea("H = H + 1", entor->nivel);
}
void tablaSimbolos::incrementarPool(elementoEntorno *entor){
    linea("S = S + 1", entor->nivel);
}


elementoClase *tablaSimbolos::getClase(token *nombre){


    for (int i = 0; i < lstClases.count(); ++i) {
        elementoClase * elem= lstClases[i];
        if(elem->nombreClase->valLower==nombre->valLower){
            return elem;
        }
    }

    this->tablaError->insertErrorSemantic("No se encuentra la clase:"+nombre->val, nombre);
    return NULL;
}


void tablaSimbolos::nuevaLinea(QString txt){
    this->editorSalida->moveCursor (QTextCursor::End);
    this->editorSalida->insertPlainText (txt);
    this->editorSalida->moveCursor (QTextCursor::End);
}

void tablaSimbolos::setTextConsola(QString texto){

    this->txtSalidaConsola->moveCursor (QTextCursor::End);
    this->txtSalidaConsola->insertPlainText (texto);
    this->txtSalidaConsola->moveCursor (QTextCursor::End);
}



void tablaSimbolos::debugerColine(elementoEntorno *entor){
    //enviando la tabla de simbolos
    dlgColine->ui->tableWidget->setRowCount(0);
    entor->cargarTablaColine(dlgColine->ui->tableWidget, 0);

    //Enviando la salida
    dlgColine->ui->txtSalida->setText(editorSalida->toPlainText());
    dlgColine->exec();
}




#include "ui_debug3d.h"
void tablaSimbolos::debuger3D(Entorno3D *entorno, TablaTemporales *temporales, int linea){


    if(modoDebuger){
        if(lineaDebuger!=linea){


            dlg3D->ui->txtHeap->setText(QString::number(entorno->H));
            dlg3D->ui->txtPool->setText(QString::number(entorno->S));
            dlg3D->ui->txtStack->setText(QString::number(entorno->P));

            entorno->Heap->llenarTabla(dlg3D->ui->tablaHeap);
            entorno->Pool->llenarTabla(dlg3D->ui->tablaPool);
            entorno->Stack->llenarTabla(dlg3D->ui->tablaStack);
            temporales->llenarTabla(dlg3D->ui->tablaTemporales);


            //enviando el contenido a la consola
            dlg3D->ui->txtConsolaSalida2->clear();
            dlg3D->ui->txtConsolaSalida2->moveCursor (QTextCursor::End);
            dlg3D->ui->txtConsolaSalida2->insertPlainText (txtSalidaConsola->toPlainText());
            dlg3D->ui->txtConsolaSalida2->moveCursor (QTextCursor::End);




            //dlg3D->ui->txtConsolaSalida2->ap

            editorSalida->pintarLinea(linea);
            dlg3D->exec();

            lineaDebuger=linea;
        }


    }



}


void tablaSimbolos::resetearValores()
{
    numEtiqueta=0;
    numSalto=0;
    tablaError=new tablaErrores(this);
    this->tblErrors->setRowCount(0);
    lstClases.clear();
    Salida3d="";

    //modoDebuger=false;
    lineaDebuger=0;
    editorSalida->clear();

}



void tablaSimbolos::dbg_pasoPaso(){
    modoDebuger=true;
    numModo=0;
}

void tablaSimbolos::dbg_automatico(){
    modoDebuger=true;
    numModo=1;
}

void tablaSimbolos::dbg_instruccion(){
    modoDebuger=true;
    numModo=2;
}
void tablaSimbolos::dbg_reset(){
    modoDebuger=false;
    numModo=0;
}
