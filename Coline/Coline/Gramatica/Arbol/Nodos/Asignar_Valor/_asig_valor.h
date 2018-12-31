#ifndef _ASIG_VALOR_H
#define _ASIG_VALOR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _ASIG_VALOR: public nodoModelo
{
public:
    _ASIG_VALOR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _ASIG_VALOR_H
