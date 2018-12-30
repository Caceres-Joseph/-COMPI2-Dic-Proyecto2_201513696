#ifndef _RETORNO_H
#define _RETORNO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _RETORNO: public nodoModelo
{
public:
    _RETORNO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _RETORNO_H
