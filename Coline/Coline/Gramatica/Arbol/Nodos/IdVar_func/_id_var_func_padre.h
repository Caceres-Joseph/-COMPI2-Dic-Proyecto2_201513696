#ifndef _ID_VAR_FUNC_PADRE_H
#define _ID_VAR_FUNC_PADRE_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Elementos/Objetos/objetoclase.h"

class _ID_VAR_FUNC_PADRE: public nodoModelo
{
public:
    _ID_VAR_FUNC_PADRE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemValor *getValor(elementoEntorno *entorno);
    itemRetorno *ejecutar (elementoEntorno *entor)override;
    itemValor * cargarMetodo(elementoEntorno *entor);
    void ejecutarMetodo(elementoEntorno *entor);
    itemValor *ejecutarMetodoRetorno(elementoEntorno *entor);

    itemValor * getDireccionVar(token *idVar, elementoEntorno *entorno);

    QString getIndiceMapeado(QList<itemValor*>lstValores,QString direcArreglo, elementoEntorno *entor);
};

#endif // _ID_VAR_FUNC_PADRE_H
