#ifndef _LST_LLAVES_VAL_H
#define _LST_LLAVES_VAL_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"


class _LST_LLAVES_VAL: public nodoModelo
{
public:
    _LST_LLAVES_VAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_LLAVES_VAL_H
