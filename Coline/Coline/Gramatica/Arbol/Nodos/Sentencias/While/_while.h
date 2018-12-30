#ifndef _WHILE_H
#define _WHILE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _WHILE: public nodoModelo
{
public:
    _WHILE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _WHILE_H
