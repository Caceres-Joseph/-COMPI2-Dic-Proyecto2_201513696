#ifndef _LST_VAL_H
#define _LST_VAL_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _LST_VAL: public nodoModelo
{
public:
    _LST_VAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_VAL_H
