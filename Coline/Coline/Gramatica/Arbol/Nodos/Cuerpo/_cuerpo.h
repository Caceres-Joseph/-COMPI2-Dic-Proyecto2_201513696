#ifndef _CUERPO_H
#define _CUERPO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _CUERPO: public nodoModelo
{
public:
    _CUERPO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _CUERPO_H
