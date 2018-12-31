#ifndef ELEMENTOPOLIMORFO_H
#define ELEMENTOPOLIMORFO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
//#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Elementos/Items/itemvalor.h"
#include "Coline/Elementos/Elementos/elementoparametro.h"

class nodoModelo;
class elementoPolimorfo
{
public:

    token *tipo;
    std::map<QString,elementoParametro> lstParametros;
    token *nombre;
    itemValor *retorno;
    tablaSimbolos *tabla;
    nodoModelo *LST_CUERPO;
    token *visibilidad;
    int dimension=0;

    elementoPolimorfo(token *visibilidad, tablaSimbolos *tabla, token *tipo,token *nombre, nodoModelo *LST_CUERPO, int dimension);
};

#endif // ELEMENTOPOLIMORFO_H
