#ifndef _LST_PUNTOSP_H
#define _LST_PUNTOSP_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _LST_PUNTOSP: public nodoModelo
{
public:
    _LST_PUNTOSP(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_PUNTOSP_H
