#ifndef _VAR_ARREGLO_H
#define _VAR_ARREGLO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _VAR_ARREGLO: public nodoModelo
{
public:
    _VAR_ARREGLO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _VAR_ARREGLO_H
