#ifndef _LST_CORCHETES_H
#define _LST_CORCHETES_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"


class _LST_CORCHETES: public nodoModelo
{
public:
    _LST_CORCHETES(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_CORCHETES_H
