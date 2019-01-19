#ifndef ELEMENTOPOLIMORFO_H
#define ELEMENTOPOLIMORFO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
//#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Elementos/Items/itemvalor.h"
#include "Coline/Elementos/Elementos/elementoparametro.h"

class nodoModelo;
class elementoPolimorfo
{
public:

    token *tipo;
    //std::map<QString,elementoParametro*> lstParametros;
    //
    QList<elementoParametro*> lstParametros;
    QList<QString> lstNombres;

    token *nombre;
    itemValor *retorno;
    tablaSimbolos *tabla;
    nodoModelo *LST_CUERPO;
    token *visibilidad;
    int dimension=0;
    QString nombreClase="";

    elementoPolimorfo(token *visibilidad, tablaSimbolos *tabla, token *tipo,token *nombre, nodoModelo *LST_CUERPO, int dimension, QString nombreClase);

    void insertarParametro(token *idParametro,token *tipoParametro, int dimension);
    void ejecutar(elementoEntorno *entor, QString nameClass);
    void cargarParametros(elementoEntorno *entor);

    QString cadParams();

    itemValor *getValor(QString tipo);
    bool comprobarParams(QList<itemValor*> params, token *nombre);
};

#endif // ELEMENTOPOLIMORFO_H
