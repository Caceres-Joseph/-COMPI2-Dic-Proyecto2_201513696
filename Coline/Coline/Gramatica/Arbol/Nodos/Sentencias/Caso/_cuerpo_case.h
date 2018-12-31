#ifndef _CUERPO_CASE_H
#define _CUERPO_CASE_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"


class _CUERPO_CASE: public nodoModelo
{
public:
    _CUERPO_CASE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _CUERPO_CASE_H
