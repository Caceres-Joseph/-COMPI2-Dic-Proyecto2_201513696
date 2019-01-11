#include "_for.h"


/*
 * //tPara  sAbreParent DECLARAR_VARIABLE_SINVISIBI sPuntoComa E sPuntoComa ASIG_VALOR sCierraParent sAbreLlave  LST_CUERPO  sCierraLlave

*/
itemRetorno* _FOR::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("Para", entor->nivel);
    itemRetorno* ret=new itemRetorno(0);

    if(hayErrores())
        return ret;

    /* --------------------
     * CREANDO UN NUEVO ENTORNO
     * --------------------
    */
    elementoEntorno *nuevoEntorno=new elementoEntorno(entor,tabla,"para",entor->este);
    nuevoEntorno->nivel=entor->nivel+1;

    hijos[0]->ejecutar(nuevoEntorno);

    QString etqInicio=tabla->getSalto();
    tabla->linea2(etqInicio+":",entor->nivel);


    /* -----------
     * CONDICION
     * -----------
    */
    _E *nodoE=(_E*)hijos[1];
    itemValor *valor2=nodoE->getValor(nuevoEntorno);

    //validando que sea de tipo bool
    if(!valor2->isTypeBooleano()){
        tabla->tablaError->insertErrorSemantic(
                    "Para evaluar la condición solo se permiten valores booleanos, no de tipo"+valor2->valor->tipo,
                    lst_Atributos->getToken(0));
        return ret;
    }


    /* -----------
     * EJECUTAR CUERPO
     * -----------
    */
    itemValor* valor=operarCondicion(valor2,nuevoEntorno);

    tabla->linea2(valor->c3dF+":",nuevoEntorno->nivel);
    //la parte falsa
    tabla->linea("goto "+valor->c3dS, nuevoEntorno->nivel);
    tabla->linea2(valor->c3dV+":",nuevoEntorno->nivel);
    //la parte verdadera
    hijos[3]->ejecutar(nuevoEntorno);
    /* -----------
     * ASIGNANDO
     * -----------
    */
    hijos[2]->ejecutar(nuevoEntorno);
    tabla->limpiarAmbito(nuevoEntorno);
    tabla->linea("goto "+etqInicio, nuevoEntorno->nivel);
    tabla->linea2(valor->c3dS+":",nuevoEntorno->nivel);




    return ret;
}


itemValor * _FOR::operarCondicion(itemValor *valor,elementoEntorno *entor){

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


