#ifndef LSTPOLIMORFISMO_H
#define LSTPOLIMORFISMO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Elementos/elementopolimorfo.h"
#include "Coline/Elementos/Elementos/elementoentorno.h"
//#include "Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_sinvisibi.h"
class lstPolimorfismo
{
public:
    QList<elementoPolimorfo*> listaPolimorfa;
    tablaSimbolos *tabla;
    QString nombre;
    lstPolimorfismo(tablaSimbolos *tabla,QString nombre);

    void ejecutar(elementoEntorno *entorno);

};

#endif // LSTPOLIMORFISMO_H
