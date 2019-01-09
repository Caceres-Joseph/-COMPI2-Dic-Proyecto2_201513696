#ifndef _ID_VAR_FUNC_H
#define _ID_VAR_FUNC_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/IdVar_func/_id_var_func_padre.h"


class _ID_VAR_FUNC: public _ID_VAR_FUNC_PADRE
{
public:
    _ID_VAR_FUNC(QString nombre, tablaSimbolos *tabla): _ID_VAR_FUNC_PADRE(nombre,tabla) {}

    itemValor * getDestino(elementoEntorno *entorno);
};

#endif // _ID_VAR_FUNC_H
