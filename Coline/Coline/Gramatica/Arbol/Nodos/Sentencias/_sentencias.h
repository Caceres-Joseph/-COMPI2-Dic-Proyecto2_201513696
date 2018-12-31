#ifndef _SENTENCIAS_H
#define _SENTENCIAS_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _SENTENCIAS: public nodoModelo
{
public:
    _SENTENCIAS(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _SENTENCIAS_H
