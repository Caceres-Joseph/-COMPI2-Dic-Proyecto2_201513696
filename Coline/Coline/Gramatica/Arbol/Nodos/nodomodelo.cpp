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

void nodoModelo::validandoDebug(elementoEntorno *entor, int linea){

    //el token es para identificar la linea

    if(tabla->modoDebuger){

        if(tabla->lineaDebuger!=linea){

            if(tabla->editorEntrada!=NULL){
                tabla->editorEntrada->pintarLinea(linea);
            }

            tabla->debugerColine(entor);
            tabla->lineaDebuger=linea;
        }

    }

}
