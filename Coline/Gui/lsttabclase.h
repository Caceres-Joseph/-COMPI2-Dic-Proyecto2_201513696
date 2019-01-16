#ifndef LSTTABCLASE_H
#define LSTTABCLASE_H

#include "Coline/Elementos/Global/importar.h"
#include "Gui/nodotabclase.h"
class lstTabClase
{
public:


    QTabWidget *tabClases;
    QList<nodoTabClase*> listaTabs;
    tablaSimbolos *tabla;

    lstTabClase(QTabWidget *tabClases, tablaSimbolos *tabla);

    void insertarTab(QString nombre);
    bool yaExisteTab(QString nombre);

    void traducir();
};

#endif // LSTTABCLASE_H
