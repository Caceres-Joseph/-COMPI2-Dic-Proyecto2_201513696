#ifndef _REPETIR_H
#define _REPETIR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"


class _REPETIR: public nodoModelo
{
public:
    _REPETIR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _REPETIR_H
