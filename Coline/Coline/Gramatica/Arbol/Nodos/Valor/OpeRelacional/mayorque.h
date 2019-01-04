#ifndef MAYORQUE_H
#define MAYORQUE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"
class MayorQue: public opModelo
{
public:
    MayorQue(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opMayorQue(elementoEntorno *entorno, QString simbolo);
    void println(QString mensaje);
};

#endif // MAYORQUE_H
