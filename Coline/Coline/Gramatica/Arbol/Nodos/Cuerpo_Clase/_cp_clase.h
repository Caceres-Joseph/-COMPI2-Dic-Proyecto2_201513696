#ifndef _CP_CLASE_H
#define _CP_CLASE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _CP_CLASE: public nodoModelo
{
public:
    _CP_CLASE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _CP_CLASE_H
