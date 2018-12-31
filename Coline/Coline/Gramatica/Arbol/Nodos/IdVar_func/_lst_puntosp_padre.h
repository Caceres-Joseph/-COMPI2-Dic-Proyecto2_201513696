#ifndef _LST_PUNTOSP_PADRE_H
#define _LST_PUNTOSP_PADRE_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"


class _LST_PUNTOSP_PADRE: public nodoModelo
{
public:
    _LST_PUNTOSP_PADRE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_PUNTOSP_PADRE_H
