#ifndef _VAL_H
#define _VAL_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_valor.h"
class _VAL: public nodoModelo
{
public:
    _VAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    itemValor *getValor(elementoEntorno* elemento, token *tipo);

};

#endif // _VAL_H
