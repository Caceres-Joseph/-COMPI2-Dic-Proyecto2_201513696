#ifndef _PARAMETRO_H
#define _PARAMETRO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _PARAMETRO: public nodoModelo
{
public:
    _PARAMETRO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _PARAMETRO_H
