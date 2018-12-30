#ifndef _USAR_METODO_H
#define _USAR_METODO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _USAR_METODO: public nodoModelo
{
public:
    _USAR_METODO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _USAR_METODO_H
