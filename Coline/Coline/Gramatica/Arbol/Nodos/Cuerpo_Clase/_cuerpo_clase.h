#ifndef _CUERPO_CLASE_H
#define _CUERPO_CLASE_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _CUERPO_CLASE: public nodoModelo
{
public:
    _CUERPO_CLASE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

};

#endif // _CUERPO_CLASE_H
