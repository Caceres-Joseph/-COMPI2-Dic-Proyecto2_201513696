#include "tablaerrores.h"

#include "Coline/Elementos/Tablas/tablasimbolos.h"

#include <qtablewidget.h>




void tablaErrores::insertar(elementoError *nodo){


    tabla->tblErrors->setRowCount(indice+1);
    QTableWidgetItem *tab1=new QTableWidgetItem(nodo->linea);
    tabla->tblErrors->setItem(indice,0,tab1);


    tabla->tblErrors->setRowCount(indice+1);
    QTableWidgetItem *tab2=new QTableWidgetItem(nodo->columna);
    tabla->tblErrors->setItem(indice,1,tab2);


    tabla->tblErrors->setRowCount(indice+1);
    QTableWidgetItem *tab3=new QTableWidgetItem(nodo->tipo);
    tabla->tblErrors->setItem(indice,2,tab3);


    tabla->tblErrors->setRowCount(indice+1);
    QTableWidgetItem *tab4=new QTableWidgetItem(nodo->descripcion);
    tabla->tblErrors->setItem(indice,3,tab4);



    indice++;

    this->listaErrores.append(nodo);
}

/*
 *----------------
 * Errores Sintacticos
 *----------------
*/
void tablaErrores::insertErrorSyntax(QString ambito, int linea, int columna, QString mensaje){
    elementoError *elem=new elementoError();
    elem->ambito=ambito;
    elem->tipo="Sintactico";
    elem->linea=QString::number(linea+1);
    elem->columna=QString::number(columna+1);
    elem->descripcion=mensaje;
    //this->listaErrores.append(elem);
    insertar(elem);
    std::cout<<"[Error]Sintactico-> "<<mensaje.toStdString()<<" linea:"<<linea<<" ambito:"<<ambito.toStdString()<<std::endl;
}


void tablaErrores::insertErrorSyntax(QString mensaje, token * tok){
    elementoError *elem=new elementoError();
    elem->ambito=tok->archivo;
    elem->tipo="Sintactico";
    elem->linea=QString::number(tok->linea+1);
    elem->columna=QString::number(tok->columna+1);
    elem->descripcion=mensaje;
    //this->listaErrores.append(elem);
    insertar(elem);
    std::cout<<"[Error]Sintactico-> "<<mensaje.toStdString()<<" linea:"<<tok->linea<<std::endl;
}

/*
 *----------------
 * Errores Lexicos
 *----------------
*/
void tablaErrores::insertErrorLexical(QString ambito, int linea, int columna, QString mensaje){
    elementoError *elem=new elementoError();
    elem->ambito=ambito;
    elem->tipo="Lexico";
    elem->linea=QString::number(linea+1);
    elem->columna=QString::number(columna+1);
    elem->descripcion=mensaje;
    //this->listaErrores.append(elem);
    insertar(elem);
    std::cout<<"[Error]Lexico-> "<<mensaje.toStdString()<<" linea:"<<linea<<std::endl;
}

void tablaErrores::insertErrorLexical(QString mensaje, token * tok){
    elementoError *elem=new elementoError();
    elem->ambito=tok->archivo;
    elem->tipo="Lexico";
    elem->linea=QString::number(tok->linea+1);
    elem->columna=QString::number(tok->columna+1);
    elem->descripcion=mensaje;
    //this->listaErrores.append(elem);
    insertar(elem);
    std::cout<<"[Error]Lexico-> "<<mensaje.toStdString()<<" linea:"<<tok->linea<<std::endl;
}

/*
 *----------------
 * Errores Semanticos
 *----------------
*/

void tablaErrores::insertErrorSemantic(QString ambito, int linea, int columna, QString mensaje){
    elementoError *elem=new elementoError();
    elem->ambito=ambito;
    elem->tipo="Semantico";
    elem->linea=QString::number(linea+1);
    elem->columna=QString::number(columna+1);
    elem->descripcion=mensaje;
    //this->listaErrores.append(elem);
    insertar(elem);
    std::cout<<"[Error]Semantico-> "<<mensaje.toStdString()<<" linea:"<<linea<<std::endl;
}

void tablaErrores::insertErrorSemantic(QString mensaje, token * tok){
    elementoError *elem=new elementoError();
    elem->ambito=tok->archivo;
    elem->tipo="Semantico";
    elem->linea=QString::number(tok->linea+1);
    elem->columna=QString::number(tok->columna+1);
    elem->descripcion=mensaje;
    //this->listaErrores.append(elem);
    insertar(elem);
    std::cout<<"[Error]Semantico-> "<<mensaje.toStdString()<<" linea:"<<tok->linea<<std::endl;
}
