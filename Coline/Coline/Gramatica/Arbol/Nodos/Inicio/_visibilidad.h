#ifndef _VISIBILIDAD_H
#define _VISIBILIDAD_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _VISIBILIDAD: public nodoModelo
{
public:
    _VISIBILIDAD(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _VISIBILIDAD_H
