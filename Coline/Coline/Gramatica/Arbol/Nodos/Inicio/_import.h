#ifndef _IMPORT_H
#define _IMPORT_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _IMPORT: public nodoModelo
{
public:
    _IMPORT(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _IMPORT_H
