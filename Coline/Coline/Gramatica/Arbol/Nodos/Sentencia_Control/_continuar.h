#ifndef _CONTINUAR_H
#define _CONTINUAR_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _CONTINUAR: public nodoModelo
{
public:
    _CONTINUAR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _CONTINUAR_H
