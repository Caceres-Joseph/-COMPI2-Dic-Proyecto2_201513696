#ifndef _ID_VAR_FUNC_PADRE_H
#define _ID_VAR_FUNC_PADRE_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"


class _ID_VAR_FUNC_PADRE: public nodoModelo
{
public:
    _ID_VAR_FUNC_PADRE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemValor *getValor(elementoEntorno *entorno);
};

#endif // _ID_VAR_FUNC_PADRE_H
