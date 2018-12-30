#ifndef _EXTENDER_H
#define _EXTENDER_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _EXTENDER: public nodoModelo
{
public:
    _EXTENDER(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _EXTENDER_H
