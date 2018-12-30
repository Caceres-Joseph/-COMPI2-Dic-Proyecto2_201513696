#ifndef _USAR_VARIABLE_H
#define _USAR_VARIABLE_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _USAR_VARIABLE: public nodoModelo
{
public:
    _USAR_VARIABLE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _USAR_VARIABLE_H
