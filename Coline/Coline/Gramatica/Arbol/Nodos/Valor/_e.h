#ifndef _E_H
#define _E_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/suma.h"
class _E: public nodoModelo
{
public:
    _E(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemValor *getValor(elementoEntorno* elemento);
};

#endif // _E_H
