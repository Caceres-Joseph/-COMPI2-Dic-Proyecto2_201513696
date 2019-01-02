#ifndef ELEMENTOENTORNO_H
#define ELEMENTOENTORNO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
//#include "Coline/Elementos/Objetos/objetoclase.h"
#include "Coline/Elementos/Items/itementorno.h"
class objetoClase;

class elementoEntorno
{
public:

    elementoEntorno *anterior;
    tablaSimbolos *tabla;
    QString nombre;
    objetoClase *este;


    std::map<QString,itemEntorno*> lstEntorno;
    void insertarItem(itemEntorno *nuevoEntorno);

    elementoEntorno(elementoEntorno *anterior,tablaSimbolos *tabla, QString nombre, objetoClase *este);
};

#endif // ELEMENTOENTORNO_H
