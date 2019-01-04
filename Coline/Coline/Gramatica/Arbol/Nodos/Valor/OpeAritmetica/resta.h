#ifndef RESTA_H
#define RESTA_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"
class resta: public opModelo
{
public:
    resta(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opResta(elementoEntorno *entorno);
    void println(QString mensaje);
};

#endif // RESTA_H
