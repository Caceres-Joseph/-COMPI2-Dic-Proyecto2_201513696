#ifndef OBJETOCLASE_H
#define OBJETOCLASE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
#include "Coline/Elementos/Elementos/elementoclase.h"


class objetoClase
{
public:
    elementoClase *cuerpoClase;
    tablaSimbolos *tabla;

    elementoEntorno *este;

    objetoClase(elementoClase *cuerpoClase, tablaSimbolos *tabla);

    void ejecutarGlobales();

    /*void ejecutarConstructor(token *nombre, int dimension, lstValores *prametros)
    {

    }*/

    void ejecutarPrincipal();
};

#endif // OBJETOCLASE_H
