#ifndef _FUNCIONES_NATIVAS_H
#define _FUNCIONES_NATIVAS_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _FUNCIONES_NATIVAS: public nodoModelo
{
public:
    _FUNCIONES_NATIVAS(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _FUNCIONES_NATIVAS_H
