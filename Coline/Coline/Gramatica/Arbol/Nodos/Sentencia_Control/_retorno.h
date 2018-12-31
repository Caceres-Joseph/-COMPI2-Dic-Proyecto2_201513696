#ifndef _RETORNO_H
#define _RETORNO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"


class _RETORNO: public nodoModelo
{
public:
    _RETORNO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _RETORNO_H
