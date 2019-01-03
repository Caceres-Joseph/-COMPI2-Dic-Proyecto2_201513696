#ifndef SUMA_H
#define SUMA_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"
class suma: public opModelo
{
public:
    suma(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opSuma(elementoEntorno *entorno);
    void println(QString mensaje);
};

#endif // SUMA_H
