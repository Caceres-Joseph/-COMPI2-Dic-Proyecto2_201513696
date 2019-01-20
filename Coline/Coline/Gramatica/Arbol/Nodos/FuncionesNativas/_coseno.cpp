#include "_coseno.h"



itemRetorno* _COSENO::ejecutar(elementoEntorno *entor){

    itemRetorno* ret=new itemRetorno(0);

    _E *nodoE=(_E*)hijos[0];
    _ID_VAR_FUNC *nodoFunc=(_ID_VAR_FUNC*)hijos[1];


    itemValor *valE=nodoE->getValorT(entor);
    itemValor *valDestino=nodoFunc->getDestino(entor);

    tabla->comentarioLinea("Leyendo desde consola", entor->nivel);

    if(valDestino->isTypeBooleano()){
        tabla->linea(valDestino->c3d +" = $$_getBool("+valE->c3d+")",entor->nivel);
    }else if(valDestino->isTypeDecimal()){
        tabla->linea(valDestino->c3d +" = $$_getNum("+valE->c3d+")",entor->nivel);
    }else if(valDestino->isTypeEntero()){
        tabla->linea(valDestino->c3d +" = $$_getNum("+valE->c3d+")",entor->nivel);
    }else if(valDestino->isTypeChar()){
        if(valDestino->dimen>0){
            //itemValor*vale = nodoFunc->getValor(entor);

            tabla->func_colocarParam(valDestino->c3d,1,entor);
            tabla->func_colocarParam("$$_inStr("+valE->c3d+")",2,entor);
            tabla->func_llamarFunc("func_cargarCadena",entor);
        }else{
            tabla->linea(valDestino->c3d +" = $$_getNum("+valE->c3d+")",entor->nivel);
        }
    }

    return ret;
}
