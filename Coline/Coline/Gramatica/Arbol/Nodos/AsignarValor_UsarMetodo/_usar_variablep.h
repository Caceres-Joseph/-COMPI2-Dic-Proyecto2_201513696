#ifndef _USAR_VARIABLEP_H
#define _USAR_VARIABLEP_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _USAR_VARIABLEP: public nodoModelo
{
public:
    _USAR_VARIABLEP(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _USAR_VARIABLEP_H
