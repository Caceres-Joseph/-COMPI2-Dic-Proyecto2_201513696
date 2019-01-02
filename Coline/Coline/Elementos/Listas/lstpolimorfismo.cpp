#include "lstpolimorfismo.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

lstPolimorfismo::lstPolimorfismo(tablaSimbolos *tabla, QString nombre)
{
    this->tabla=tabla;
    this->nombre=nombre;
}


void lstPolimorfismo::ejecutar(elementoEntorno *entorno){


    for (int i = 0; i < listaPolimorfa.count(); ++i) {
        elementoPolimorfo *temp=listaPolimorfa[i];
        temp->LST_CUERPO->ejecutar(entorno);
    }
}
