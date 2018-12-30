#ifndef _ASIG_VALOR_H
#define _ASIG_VALOR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _ASIG_VALOR: public nodoModelo
{
public:
    _ASIG_VALOR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _ASIG_VALOR_H
