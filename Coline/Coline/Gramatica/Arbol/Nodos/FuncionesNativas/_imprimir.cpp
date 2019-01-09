#include "_imprimir.h"



itemRetorno* _IMPRIMIR::ejecutar(elementoEntorno *entor){
    itemRetorno* ret=new itemRetorno(0);

    tabla->comentarioLinea("Imprimiendo", entor->nivel);
    tabla->linea("printf(%c, 10)",entor->nivel);

    if(nivel==1)
    //tImprimir sAbreParent VALOR sCierraParent
    {

        _VALOR *nodoVal=(_VALOR*)hijos[0];
        itemValor *val=nodoVal->getValorT(entor,new token());

        if(val->isTypeBooleano()||val->isTypeEntero()){
            tabla->linea("printf(%d, "+val->c3d+")",entor->nivel);
        }else if(val->isTypeDecimal()){
            tabla->linea("printf(%f, "+val->c3d+")",entor->nivel);
        }
        else if(val->isTypeCadena()){

        }else if(val->isTypeChar()){
            QString temp= tabla->getEtiqueta();
            tabla->linea(temp+" = Pool["+val->c3d+"]", entor->nivel);
            tabla->linea("printf(%c, "+temp+")",entor->nivel);
        }else if(val->isTypeNulo()){

        }else
        //objeto
        {

        }

    }else if(nivel==2)
    //tImprimir sAbreParent  sCierraParent
    {

    }

    return ret;
}
