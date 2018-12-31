#ifndef _CONSTRUCTOR_H
#define _CONSTRUCTOR_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _CONSTRUCTOR: public nodoModelo
{
public:
    _CONSTRUCTOR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    void ejecutarHijos2(elementoClase *simbolo)override;
};

#endif // _CONSTRUCTOR_H
