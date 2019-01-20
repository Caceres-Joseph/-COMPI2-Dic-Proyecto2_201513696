#include "_caso.h"

//tSelecciona sAbreParent E sCierraParent sAbreLlave  CUERPO_CASE  sCierraLlave
itemRetorno* _CASO::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("Seelcciona",entor->nivel);
    itemRetorno* ret=new itemRetorno(0);


    _E *nodoE =(_E*)hijos[0];
    itemValor *valE=nodoE->getValorT(entor);

    _CUERPO_CASE *nodoCuerpo=(_CUERPO_CASE*)hijos[1];

    QString etqSalida=tabla->getSalto();
    elementoEntorno *nuevoEntor=new elementoEntorno(entor,tabla,"seleccionar",entor->este);
    nuevoEntor->nivel=entor->nivel;
    nodoCuerpo->execute(valE,entor,etqSalida);


    tabla->linea2(etqSalida+":",entor->nivel);
    return ret;
}
