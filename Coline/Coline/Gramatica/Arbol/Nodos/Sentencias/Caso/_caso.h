#ifndef _CASO_H
#define _CASO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _CASO: public nodoModelo
{
public:
    _CASO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _CASO_H
