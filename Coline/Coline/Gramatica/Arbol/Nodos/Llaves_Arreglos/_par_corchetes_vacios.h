#ifndef _PAR_CORCHETES_VACIOS_H
#define _PAR_CORCHETES_VACIOS_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"
class _PAR_CORCHETES_VACIOS: public nodoModelo
{
public:
    _PAR_CORCHETES_VACIOS(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _PAR_CORCHETES_VACIOS_H
