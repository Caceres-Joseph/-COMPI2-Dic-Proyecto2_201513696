#ifndef _CONCATENAR_H
#define _CONCATENAR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_valor.h"
#include "Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.h"

class _CONCATENAR: public nodoModelo
{
public:

    _CONCATENAR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;

    void concatenarHashtag(elementoEntorno *entor,QList<itemValor*> lstValores);
};

#endif // _CONCATENAR_H
