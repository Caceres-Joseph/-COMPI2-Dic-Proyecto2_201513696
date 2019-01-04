#ifndef DIVISION_H
#define DIVISION_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"

class division: public opModelo
{
public:

    division(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opDivision(elementoEntorno *entorno);
    void println(QString mensaje);
};

#endif // DIVISION_H
