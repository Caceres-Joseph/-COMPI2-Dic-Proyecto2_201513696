#ifndef _LST_PARAMETROS_H
#define _LST_PARAMETROS_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _LST_PARAMETROS: public nodoModelo
{
public:
    _LST_PARAMETROS(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_PARAMETROS_H
