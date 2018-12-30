#ifndef _CONSTRUCTOR_H
#define _CONSTRUCTOR_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _CONSTRUCTOR: public nodoModelo
{
public:
    _CONSTRUCTOR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _CONSTRUCTOR_H
