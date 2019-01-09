#include "_while.h"

/*
 * tMientras sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
*/
itemRetorno* _WHILE::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("Mientras", entor->nivel);

    QString etqInicio=tabla->getSalto();
    tabla->linea2(etqInicio+":",entor->nivel);

    itemRetorno* ret=new itemRetorno(0);
    if(hayErrores())
        return ret;

    /*
     * COND
    */
    _E *nodoE=(_E*)hijos[0];
    itemValor *valor2=nodoE->getValor(entor);

    //validando que sea de tipo bool
    if(!valor2->isTypeBooleano()){
        tabla->tablaError->insertErrorSemantic(
                    "Para evaluar la condición solo se permiten valores booleanos, no de tipo"+valor2->valor->tipo,
                    lst_Atributos->getToken(0));
        return ret;
    }


   itemValor* valor=operarCondicion(valor2,entor);
    /*
     * CREANDO UN NUEVO ENTORNO
    */

    elementoEntorno *nuevoEntorno=new elementoEntorno(entor,tabla,"mientras",entor->este);
    nuevoEntorno->nivel=entor->nivel+1;

    cond1(valor,nuevoEntorno,etqInicio);

    return ret;
}
void _WHILE::cond1(itemValor *valor, elementoEntorno *entor, QString etqInicio)
// tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
{

    tabla->linea2(valor->c3dF+":",entor->nivel);
    //la parte falsa
    tabla->linea("goto "+valor->c3dS, entor->nivel);
    tabla->linea2(valor->c3dV+":",entor->nivel);
    //la parte verdadera
    hijos[1]->ejecutarHijos(entor);
    tabla->limpiarAmbito(entor);
    tabla->linea("goto "+etqInicio, entor->nivel);
    tabla->linea2(valor->c3dS+":",entor->nivel);

}


itemValor * _WHILE::operarCondicion(itemValor *valor,elementoEntorno *entor){

    if (valor->c3dV != ""){
        return valor;
    }else{
        itemValor *retorno=new itemValor();
        QString etqVerdad=tabla->getSalto();
        QString etqFalso=tabla->getSalto();;
        QString etSalida=tabla->getSalto();;


        tabla->linea("if("+valor->c3d+" == 1) goto "+etqVerdad,entor->nivel);
        tabla->linea("goto "+etqFalso, entor->nivel);

        retorno=new itemValor(false,"0");
        retorno->c3dF=etqFalso;
        retorno->c3dV=etqVerdad;
        retorno->c3dS=etSalida;
        return retorno;
    }
}
