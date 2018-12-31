#ifndef LSTPOLIMORFISMO_H
#define LSTPOLIMORFISMO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Elementos/elementopolimorfo.h"
class lstPolimorfismo
{
public:
    QList<elementoPolimorfo*> listaPolimorfa;
    tablaSimbolos *tabla;
    QString nombre;
    lstPolimorfismo(tablaSimbolos *tabla,QString nombre);
};

#endif // LSTPOLIMORFISMO_H
