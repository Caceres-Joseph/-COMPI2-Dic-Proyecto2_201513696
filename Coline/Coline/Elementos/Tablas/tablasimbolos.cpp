#include "tablasimbolos.h"

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
