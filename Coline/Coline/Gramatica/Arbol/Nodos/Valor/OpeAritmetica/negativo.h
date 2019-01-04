#ifndef NEGATIVO_H
#define NEGATIVO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"

class negativo: public opModelo
{
public:
    negativo(nodoModelo *hijo1, tablaSimbolos *tabla, token *signo);
    itemValor *opNegativo(elementoEntorno *entorno);
    void println(QString mensaje);
};

#endif // NEGATIVO_H
