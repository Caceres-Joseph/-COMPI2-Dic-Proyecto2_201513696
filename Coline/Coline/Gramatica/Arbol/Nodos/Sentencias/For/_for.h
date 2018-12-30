#ifndef _FOR_H
#define _FOR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _FOR: public nodoModelo
{
public:
    _FOR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _FOR_H
