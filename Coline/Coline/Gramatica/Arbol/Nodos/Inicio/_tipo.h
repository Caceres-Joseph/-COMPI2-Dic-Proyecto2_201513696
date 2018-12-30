#ifndef _TIPO_H
#define _TIPO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _TIPO: public nodoModelo
{
public:
    _TIPO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _TIPO_H
