#ifndef POTENCIA_H
#define POTENCIA_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"

class potencia: public opModelo
{
public:

    potencia(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opPot(elementoEntorno *entorno);
    void println(QString mensaje);

    QString operar(itemValor*val1, itemValor*val2, elementoEntorno *entorno);
};

#endif // POTENCIA_H
