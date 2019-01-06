#ifndef OR_H
#define OR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"

class Or: public opModelo
{
public:

    Or(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opOr(elementoEntorno *entorno, QString simbolo);


    itemValor *opOr2(elementoEntorno *entorno, QString simbolo);


    void println(QString mensaje);
};

#endif // OR_H
