#ifndef _ID_VAR_FUNC_H
#define _ID_VAR_FUNC_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _ID_VAR_FUNC: public nodoModelo
{
public:
    _ID_VAR_FUNC(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _ID_VAR_FUNC_H
