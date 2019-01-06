#ifndef NOT_H
#define NOT_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"

class Not: public opModelo
{
public:

    Not(nodoModelo *hijo1, tablaSimbolos *tabla, token *signo);
    itemValor *opNot(elementoEntorno *entorno, QString simbolo);
    void println(QString mensaje);
};

#endif // NOT_H
