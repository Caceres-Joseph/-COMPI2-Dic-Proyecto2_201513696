#ifndef _DOWHILE_H
#define _DOWHILE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _DOWHILE: public nodoModelo
{
public:
    _DOWHILE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _DOWHILE_H
