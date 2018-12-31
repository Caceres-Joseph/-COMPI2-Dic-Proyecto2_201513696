#ifndef _DECLARAR_VARIABLE_GLOBAL_H
#define _DECLARAR_VARIABLE_GLOBAL_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _DECLARAR_VARIABLE_GLOBAL: public nodoModelo
{
public:
    _DECLARAR_VARIABLE_GLOBAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _DECLARAR_VARIABLE_GLOBAL_H
