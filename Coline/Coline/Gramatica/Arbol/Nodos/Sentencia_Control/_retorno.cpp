#include "_retorno.h"


itemRetorno* _RETORNO::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("Retorno",entor->nivel);
    itemRetorno* ret=new itemRetorno(0);

    if(tabla->Salida3d == ""){
        tabla->tablaError->insertErrorSemantic("Retorno en ambito:"+entor->nombre,lst_Atributos->getToken(0));
        return ret;
    }

    if(nivel==1){
        tabla->linea("goto "+tabla->Salida3d,entor->nivel);
    }else if(nivel==2)
    //tRetorno  VALOR  sPuntoComa
    {
        //el retorno con valor lo agrego en la ultima posición del ambito, jejejejejejej
        _VALOR *nodoVal=(_VALOR*)hijos[0];
        itemValor *val=nodoVal->getValorT(entor,new token());

        tabla->linea("Stack[P] = "+val->c3d,entor->nivel);
        tabla->linea("goto "+tabla->Salida3d,entor->nivel);
    }

    return ret;
}
