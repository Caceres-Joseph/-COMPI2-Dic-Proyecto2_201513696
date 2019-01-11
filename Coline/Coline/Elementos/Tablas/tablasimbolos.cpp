#include "tablasimbolos.h"
#include "Coline/Elementos/Elementos/elementoentorno.h"

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
    this->salida.append(retorno);

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
    this->salida.append(retorno);

}
void tablaSimbolos::linea(QString txt, int nivel, QString comentario){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt+";";
    retorno += "\t//"+comentario;
    this->salida.append(retorno);
}

void tablaSimbolos::linea2(QString txt, int nivel){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt;
    this->salida.append(retorno);

}
void tablaSimbolos::linea2(QString txt, int nivel, QString comentario){

    QString retorno="\n";
    for (int i = 0; i < nivel; ++i) {
        retorno+="\t";
    }

    retorno+=txt;
    retorno += "\t//"+comentario;
    this->salida.append(retorno);
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
