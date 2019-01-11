#include "_metodo.h"


void _METODO::ejecutarHijos2(elementoClase *simbolo){



    _TIPO *nodoTipo;

    int dimensiones=0;
    nodoModelo * cuerpo;
    if(nivel==1){
        nodoTipo=(_TIPO*)hijos[1];
        cuerpo=hijos[3];
    }else if(nivel==2){
        nodoTipo=(_TIPO*)hijos[0];
        cuerpo=hijos[2];
    }else if(nivel==3){
        _LST_CORCHETES *nodoCor=(_LST_CORCHETES*)hijos[2];
        dimensiones=nodoCor->getDimensiones();
        nodoTipo=(_TIPO*)hijos[1];
        cuerpo=hijos[4];
    }else if(nivel==4){
        _LST_CORCHETES *nodoCor=(_LST_CORCHETES*)hijos[1];
        dimensiones=nodoCor->getDimensiones();
        nodoTipo=(_TIPO*)hijos[0];
        cuerpo=hijos[3];
    }


    token *visibilidad=new token("publico");
    token *nombre2=lst_Atributos->getToken(0);
    token *tipo=nodoTipo->getTipo();

    //int dimensiones=nodoVar->getDimensiones().count();


    elementoPolimorfo *eleme=new elementoPolimorfo(visibilidad,tabla,tipo,nombre2,cuerpo,dimensiones, simbolo->nombreClase->valLower);

    cargarPolimorfismoHijos(eleme);
    simbolo->lstMetodo_funcion->listaPolimorfa.append(eleme);
}
