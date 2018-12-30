#ifndef _LST_CUERPO2_H
#define _LST_CUERPO2_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"

class _LST_CUERPO2: public nodoModelo
{
public:
    _LST_CUERPO2(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _LST_CUERPO2_H
