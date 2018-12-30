#ifndef _VAL_H
#define _VAL_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _VAL: public nodoModelo
{
public:
    _VAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _VAL_H
