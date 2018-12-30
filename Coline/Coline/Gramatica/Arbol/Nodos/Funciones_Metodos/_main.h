#ifndef _MAIN_H
#define _MAIN_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _MAIN: public nodoModelo
{
public:
    _MAIN(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _MAIN_H
