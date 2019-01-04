#ifndef MULTIPLICACION_H
#define MULTIPLICACION_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"

class multiplicacion: public opModelo
{
public:

    multiplicacion(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opMult(elementoEntorno *entorno);
    void println(QString mensaje);
};

#endif // MULTIPLICACION_H
