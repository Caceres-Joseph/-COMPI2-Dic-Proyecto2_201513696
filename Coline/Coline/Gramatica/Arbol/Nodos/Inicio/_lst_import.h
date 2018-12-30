#ifndef _LST_IMPORT_H
#define _LST_IMPORT_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _LST_IMPORT: public nodoModelo
{
public:
    _LST_IMPORT(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_IMPORT_H
