#ifndef _VALOR_H
#define _VALOR_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_llaves_val.h"
#include "Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.h"
class _VALOR: public nodoModelo
{
public:
    _VALOR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    itemValor *getValor(elementoEntorno* elemento, token *tipo);

    itemValor *getValorT(elementoEntorno *entor, token *tipo);

    itemValor *getObjeto(elementoEntorno* entor);

    void ejecutarConstructor(elementoEntorno* entor, QString este, objetoClase *clase);

};

#endif // _VALOR_H
