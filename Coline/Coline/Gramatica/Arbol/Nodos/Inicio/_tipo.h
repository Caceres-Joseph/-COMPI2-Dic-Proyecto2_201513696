#ifndef _TIPO_H
#define _TIPO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"


class _TIPO: public nodoModelo
{
public:
    _TIPO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _TIPO_H
