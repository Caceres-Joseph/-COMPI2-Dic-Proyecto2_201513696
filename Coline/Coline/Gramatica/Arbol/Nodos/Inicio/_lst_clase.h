#ifndef _LST_CLASE_H
#define _LST_CLASE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _LST_CLASE: public nodoModelo
{
public:
    _LST_CLASE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_CLASE_H
