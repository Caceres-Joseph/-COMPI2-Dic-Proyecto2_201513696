#ifndef _SUPER_H
#define _SUPER_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _SUPER: public nodoModelo
{
public:
    _SUPER(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _SUPER_H
