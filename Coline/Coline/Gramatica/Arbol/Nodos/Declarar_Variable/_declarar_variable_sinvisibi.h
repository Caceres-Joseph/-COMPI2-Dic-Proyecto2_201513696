#ifndef _DECLARAR_VARIABLE_SINVISIBI_H
#define _DECLARAR_VARIABLE_SINVISIBI_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_val.h"


#include "Coline/Gramatica/Arbol/Nodos/Inicio/_tipo.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_var_arreglo.h"

class _DECLARAR_VARIABLE_SINVISIBI: public nodoModelo
{
public:
    _DECLARAR_VARIABLE_SINVISIBI(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    itemRetorno *ejecutar (elementoEntorno *entor)override;
    void cargarArreglo(QString asign, token *tokId, token *tipo, QList<itemValor*> dimen, itemValor *valor, elementoEntorno *entor, bool esGlobal);
    void cargarCadena(QString asign, token *tokId, token *tipo, QList<itemValor*> dimen, itemValor *valor, elementoEntorno *entor, bool esGlobal);

    void cargarGlobales(elementoEntorno *entor);

};

#endif // _DECLARAR_VARIABLE_SINVISIBI_H
