#ifndef _SINO_SI_H
#define _SINO_SI_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _SINO_SI: public nodoModelo
{
public:
    _SINO_SI(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _SINO_SI_H
