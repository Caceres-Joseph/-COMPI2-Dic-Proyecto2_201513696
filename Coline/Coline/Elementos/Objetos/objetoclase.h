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

    void ejecutarGlobales(elementoEntorno *entor);
    void ejecutarPrincipal();
    void ejecutarMetodos();
    void ejecutarConstructores();

    itemValor *getMetodo(token *nombre, QList<itemValor*> params);
    itemValor *getConstructor(token *nombre, QList<itemValor*> params);
};

#endif // OBJETOCLASE_H
