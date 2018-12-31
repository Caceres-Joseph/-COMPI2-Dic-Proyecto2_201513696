#ifndef _LST_CUERPO_H
#define _LST_CUERPO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _LST_CUERPO: public nodoModelo
{
public:
    _LST_CUERPO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_CUERPO_H
