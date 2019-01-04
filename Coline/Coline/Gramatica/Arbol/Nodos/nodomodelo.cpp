#include "nodomodelo.h"


itemRetorno *nodoModelo::ejecutar(elementoEntorno *entor){
    return ejecutarHijos(entor);
}

itemRetorno *nodoModelo::ejecutarHijos(elementoEntorno *entor){

    itemRetorno *ret=new itemRetorno(0);
    for (int i = 0; i < hijos.count(); ++i) {
        nodoModelo *temp=hijos[i];
        temp->ejecutar(entor);
    }

    return ret;
}

void nodoModelo::println(QString mensaje)
{
    std::cout<<"["<<nombre.toStdString()<<"]"<<mensaje.toStdString()<<std::endl;
}
