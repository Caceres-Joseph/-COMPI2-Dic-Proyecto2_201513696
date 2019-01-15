#include "lsttabclase.h"

lstTabClase::lstTabClase(QTabWidget *tabClases, tablaSimbolos *tabla)
{
    this->tabla=tabla;
    this->tabClases=tabClases;
}

void lstTabClase::insertarTab(QString nombre){
    nodoTabClase *nuevoNodo=new nodoTabClase(nombre,tabla,tabClases);
    listaTabs.append(nuevoNodo);
}


bool lstTabClase::yaExisteTab(QString nombre){
    for (int i = 0; i < listaTabs.count(); ++i) {
        nodoTabClase *elemen=listaTabs[i];
        if(elemen->nombre==nombre){
            return true;
        }
    }

    return false;
}


