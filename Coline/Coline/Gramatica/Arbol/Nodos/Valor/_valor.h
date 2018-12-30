#ifndef _VALOR_H
#define _VALOR_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _VALOR: public nodoModelo
{
public:
    _VALOR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _VALOR_H
