#ifndef _USAR_METO_VAR_H
#define _USAR_METO_VAR_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _USAR_METO_VAR: public nodoModelo
{
public:
    _USAR_METO_VAR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _USAR_METO_VAR_H
