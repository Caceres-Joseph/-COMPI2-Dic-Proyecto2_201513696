#ifndef _SOBRESCRITURA_H
#define _SOBRESCRITURA_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _SOBRESCRITURA: public nodoModelo
{
public:
    _SOBRESCRITURA(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _SOBRESCRITURA_H
