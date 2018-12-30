#ifndef _CLASE_H
#define _CLASE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"


class _CLASE: public nodoModelo
{
public:
    explicit _CLASE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _CLASE_H
