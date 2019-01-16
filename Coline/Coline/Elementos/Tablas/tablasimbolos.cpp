#include "tablasimbolos.h"
#include "Coline/Elementos/Elementos/elementoentorno.h"
#include "Coline/Elementos/Elementos/elementoclase.h"
#include <QStandardItemModel>
#include "ui_debugcoline.h"
#include "debugcoline.h"
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
#import <QThread>
void tablaSimbolos::debugerColine(elementoEntorno *entor){
/*
    QStandardItemModel model;
    model.index(1,1,model.index(0,0));

    QStringList horizontalHeader;
    QStringList verticalHeader;

    horizontalHeader.append("SPH");
    horizontalHeader.append("CYL");
    horizontalHeader.append("AXIS");
    horizontalHeader.append("A.D.D");

    verticalHeader.append("R");
    verticalHeader.append("L");

    model.setHorizontalHeaderLabels(horizontalHeader);
    model.setVerticalHeaderLabels(verticalHeader);



     QStandardItem *item00 = new QStandardItem(QString("0"));
    model.setItem(0, 0, item00);

     QStandardItem *item01 = new QStandardItem(QString("0"));
    model.setItem(0, 1, item01);

     QStandardItem *item02 = new QStandardItem(QString("0"));
    model.setItem(0, 2, item02);

     QStandardItem *item03 = new QStandardItem(QString("0"));
    model.setItem(0, 3, item03);
    */
/*
    QTableWidget *tabla1=new QTableWidget();
    tabla1->setModel(&model);
    dlgColine->ui->tableWidget=tabla1;
*/
    //dlgColine->ui->tableWidget->setModel(&model);
    //dlgColine->ui->tableWidget->resizeColumnToContents();

    /*
    dlgColine->ui->tableWidget->setItem(1,0,tab);
    */

    /*
    dlgColine->ui->tableWidget->setRowCount(0);
    QTableWidgetItem *tab=new QTableWidgetItem("Nuevo323");
    dlgColine->ui->tableWidget->setItem(1,0,tab);
    dlgColine->ui->tableWidget->setRowCount(2);
*/

    //enviando la tabla de simbolos
    dlgColine->ui->tableWidget->setRowCount(0);
    entor->cargarTablaColine(dlgColine->ui->tableWidget, 0);



    //Enviando la salida
    dlgColine->ui->txtSalida->setText(editorSalida->toPlainText());
    dlgColine->exec();

}


void tablaSimbolos::resetearValores()
{
    numEtiqueta=0;
    numSalto=0;
    tablaError=new tablaErrores();
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
