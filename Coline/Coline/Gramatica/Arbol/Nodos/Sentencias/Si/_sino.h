#ifndef _SINO_H
#define _SINO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _SINO: public nodoModelo
{
public:
    _SINO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _SINO_H
