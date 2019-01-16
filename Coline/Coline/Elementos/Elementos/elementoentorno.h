#ifndef ELEMENTOENTORNO_H
#define ELEMENTOENTORNO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
//#include "Coline/Elementos/Objetos/objetoclase.h"
#include "Coline/Elementos/Items/itementorno.h"
#include <QTableWidget>

class objetoClase;

class elementoEntorno
{
public:

    //chapus
    QString etqFalso="";
    QString etqVerdadero="";
    QString etqSalida="";

    //para el 3d
    int nivel=0;
    //
    elementoEntorno *anterior;
    tablaSimbolos *tabla;
    QString nombre;
    objetoClase *este;


    QList<itemEntorno*> lstEntorno;
    void insertarItem(itemEntorno *nuevoEntorno);

    elementoEntorno(elementoEntorno *anterior,tablaSimbolos *tabla, QString nombre, objetoClase *este);

    itemEntorno *getValId(token *idVal);
    itemEntorno *getValIdGlobal(token *idVal);
    int tamEntornoAbsoluto();
    int posVar2(int num);

    int cargarTablaColine(QTableWidget *tablaSimb, int indice);
};

#endif // ELEMENTOENTORNO_H
