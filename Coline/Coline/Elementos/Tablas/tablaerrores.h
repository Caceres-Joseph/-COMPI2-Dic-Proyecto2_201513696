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
class tablaSimbolos;

class tablaErrores
{
public:
    QList<elementoError*> listaErrores;
    int indice=0;
    tablaSimbolos *tabla;
    tablaErrores(tablaSimbolos *tabla){
        this->tabla=tabla;
    }


    void insertar(elementoError *nodo);

    /*
     *----------------
     * Errores Sintacticos
     *----------------
    */
    void insertErrorSyntax(QString ambito, int linea, int columna, QString mensaje);


    void insertErrorSyntax(QString mensaje, token * tok);

    /*
     *----------------
     * Errores Lexicos
     *----------------
    */
    void insertErrorLexical(QString ambito, int linea, int columna, QString mensaje);

    void insertErrorLexical(QString mensaje, token * tok);
    /*
     *----------------
     * Errores Semanticos
     *----------------
    */

    void insertErrorSemantic(QString ambito, int linea, int columna, QString mensaje);

    void insertErrorSemantic(QString mensaje, token * tok);


};

#endif // TABLAERRORES_H
