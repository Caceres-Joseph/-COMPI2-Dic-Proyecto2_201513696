#ifndef _LST_CORCHETES_VAL_H
#define _LST_CORCHETES_VAL_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _LST_CORCHETES_VAL: public nodoModelo
{
public:
    _LST_CORCHETES_VAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_CORCHETES_VAL_H
