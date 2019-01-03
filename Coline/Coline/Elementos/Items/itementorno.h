#ifndef ITEMENTORNO_H
#define ITEMENTORNO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Items/itemvalor.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
class itemEntorno
{
public:


    //
    token *tipo;
    token *nombre;
    itemValor *valor;
    QList<int> dimension;
    tablaSimbolos *tabla;



    itemEntorno(token *nombre,token *tipo, itemValor *valor, QList<int> dimension, tablaSimbolos *tabla);
};

#endif // ITEMENTORNO_H
