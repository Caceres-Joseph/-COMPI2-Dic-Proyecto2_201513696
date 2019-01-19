#ifndef IGUALQUE_H
#define IGUALQUE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"
class IgualQue: public opModelo
{
public:
    IgualQue(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo);
    itemValor *opIgualacion(elementoEntorno *entorno, QString simbolo);
    void println(QString mensaje);


    itemValor *parsear(elementoEntorno *entor, itemValor *valor);
};

#endif // IGUALQUE_H
