#ifndef _DECLARAR_VARIABLE_SINVISIBI_H
#define _DECLARAR_VARIABLE_SINVISIBI_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _DECLARAR_VARIABLE_SINVISIBI: public nodoModelo
{
public:
    _DECLARAR_VARIABLE_SINVISIBI(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _DECLARAR_VARIABLE_SINVISIBI_H
