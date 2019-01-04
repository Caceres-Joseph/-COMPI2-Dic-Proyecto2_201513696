#ifndef MODULO_H
#define MODULO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"
class modulo: public opModelo
{
public:

    modulo(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opModulo(elementoEntorno *entorno);
    void println(QString mensaje);
};

#endif // MODULO_H
