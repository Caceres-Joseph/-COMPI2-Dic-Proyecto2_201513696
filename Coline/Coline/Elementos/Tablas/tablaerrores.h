#ifndef TABLAERRORES_H
#define TABLAERRORES_H

/*
|--------------------------------------------------------------------------
| IMPORTACIONES
|--------------------------------------------------------------------------
*/
#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Elementos/elementoerror.h"
#include "Coline/Elementos/Global/token.h"
/*
|--------------------------------------------------------------------------
| CLASE
|--------------------------------------------------------------------------
*/

class tablaErrores
{
public:
    QList<elementoError*> listaErrores;

    tablaErrores(){

    }


    void insertar(elementoError *nodo){
        listaErrores.append(nodo);
    }

    /*
     *----------------
     * Errores Sintacticos
     *----------------
    */
    void insertErrorSyntax(QString ambito, int linea, int columna, QString mensaje){
        elementoError *elem=new elementoError();
        elem->ambito=ambito;
        elem->tipo="Sintactico";
        elem->linea=QString::number(linea+1);
        elem->columna=QString::number(columna+1);
        elem->descripcion=mensaje;
        this->listaErrores.append(elem);
        std::cout<<"[Error]Sintactico-> "<<mensaje.toStdString()<<" linea:"<<linea<<" ambito:"<<ambito.toStdString()<<std::endl;
    }


    void insertErrorSyntax(QString mensaje, token * tok){
        elementoError *elem=new elementoError();
        elem->ambito=tok->archivo;
        elem->tipo="Sintactico";
        elem->linea=QString::number(tok->linea+1);
        elem->columna=QString::number(tok->columna+1);
        elem->descripcion=mensaje;
        this->listaErrores.append(elem);
        std::cout<<"[Error]Sintactico-> "<<mensaje.toStdString()<<" linea:"<<tok->linea<<std::endl;
    }

    /*
     *----------------
     * Errores Lexicos
     *----------------
    */
    void insertErrorLexical(QString ambito, int linea, int columna, QString mensaje){
        elementoError *elem=new elementoError();
        elem->ambito=ambito;
        elem->tipo="Lexico";
        elem->linea=QString::number(linea+1);
        elem->columna=QString::number(columna+1);
        elem->descripcion=mensaje;
        this->listaErrores.append(elem);
        std::cout<<"[Error]Lexico-> "<<mensaje.toStdString()<<" linea:"<<linea<<std::endl;
    }

    void insertErrorLexical(QString mensaje, token * tok){
        elementoError *elem=new elementoError();
        elem->ambito=tok->archivo;
        elem->tipo="Lexico";
        elem->linea=QString::number(tok->linea+1);
        elem->columna=QString::number(tok->columna+1);
        elem->descripcion=mensaje;
        this->listaErrores.append(elem);
        std::cout<<"[Error]Lexico-> "<<mensaje.toStdString()<<" linea:"<<tok->linea<<std::endl;
    }

    /*
     *----------------
     * Errores Semanticos
     *----------------
    */

    void insertErrorSemantic(QString ambito, int linea, int columna, QString mensaje){
        elementoError *elem=new elementoError();
        elem->ambito=ambito;
        elem->tipo="Semantico";
        elem->linea=QString::number(linea+1);
        elem->columna=QString::number(columna+1);
        elem->descripcion=mensaje;
        this->listaErrores.append(elem);
        std::cout<<"[Error]Semantico-> "<<mensaje.toStdString()<<" linea:"<<linea<<std::endl;
    }

    void insertErrorSemantic(QString mensaje, token * tok){
        elementoError *elem=new elementoError();
        elem->ambito=tok->archivo;
        elem->tipo="Semantico";
        elem->linea=QString::number(tok->linea+1);
        elem->columna=QString::number(tok->columna+1);
        elem->descripcion=mensaje;
        this->listaErrores.append(elem);
        std::cout<<"[Error]Semantico-> "<<mensaje.toStdString()<<" linea:"<<tok->linea<<std::endl;
    }


};

#endif // TABLAERRORES_H
