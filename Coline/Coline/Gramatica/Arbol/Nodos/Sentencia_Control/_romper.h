#ifndef _ROMPER_H
#define _ROMPER_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _ROMPER: public nodoModelo
{
public:
    _ROMPER(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _ROMPER_H
