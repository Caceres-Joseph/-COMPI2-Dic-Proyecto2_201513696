#ifndef _IMPRIMIR_H
#define _IMPRIMIR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _IMPRIMIR: public nodoModelo
{
public:
    _IMPRIMIR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _IMPRIMIR_H
