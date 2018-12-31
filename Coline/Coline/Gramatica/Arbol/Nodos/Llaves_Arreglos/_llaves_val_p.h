#ifndef _LLAVES_VAL_P_H
#define _LLAVES_VAL_P_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _LLAVES_VAL_P: public nodoModelo
{
public:
    _LLAVES_VAL_P(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LLAVES_VAL_P_H
