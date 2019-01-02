#include "_metodo.h"


void _METODO::ejecutarHijos2(elementoClase *simbolo){

    token *visibilidad=new token("publico");

    _TIPO *nodoTipo;
    _VAR_ARREGLO *nodoVar;
    nodoModelo * cuerpo;
    if(nivel==1){
        nodoTipo=(_TIPO*)hijos[1];
        nodoVar=(_VAR_ARREGLO*)hijos[2];
        cuerpo=hijos[4];
    }else{
        nodoTipo=(_TIPO*)hijos[0];
        nodoVar=(_VAR_ARREGLO*)hijos[1];
        cuerpo=hijos[3];
    }


    token *tipo=nodoTipo->getTipo();
    token *nombre2=nodoVar->getIdentificador();
    int dimensiones=nodoVar->getDimensiones().count();

    elementoPolimorfo *eleme=new elementoPolimorfo(visibilidad,tabla,tipo,nombre2,cuerpo,dimensiones);

    cargarPolimorfismoHijos(eleme);
    simbolo->lstMetodo_funcion->listaPolimorfa.append(eleme);
}
