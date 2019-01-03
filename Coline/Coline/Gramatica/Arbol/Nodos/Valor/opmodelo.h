#ifndef OPMODELO_H
#define OPMODELO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
//#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
class _E;
class opModelo
{
public:
    _E *hijo1;
    _E *hijo2;
    token *signo;
    tablaSimbolos *tabla;

    opModelo(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    opModelo(nodoModelo *hijo1, tablaSimbolos *tabla, token *signo);
};

#endif // OPMODELO_H
