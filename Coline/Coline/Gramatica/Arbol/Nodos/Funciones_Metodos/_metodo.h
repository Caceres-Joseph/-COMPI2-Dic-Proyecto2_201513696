#ifndef _METODO_H
#define _METODO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _METODO: public nodoModelo
{
public:
    _METODO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _METODO_H
