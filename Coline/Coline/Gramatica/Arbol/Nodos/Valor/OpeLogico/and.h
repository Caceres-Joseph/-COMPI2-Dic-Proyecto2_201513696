#ifndef AND_H
#define AND_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"

class And: public opModelo
{
public:
    And(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opAnd(elementoEntorno *entorno, QString simbolo);
    void println(QString mensaje);
};

#endif // AND_H
