#include "_si_simplificado.h"



itemValor *_SI_SIMPLIFICADO::getValor(elementoEntorno *entor){
    tabla->comentarioLinea("Si simplificado",entor->nivel);
    itemValor *retorno=new itemValor();



    _E *nodoE=(_E*)hijos[0];
    itemValor *valor2=nodoE->getValor(entor);

    //validando que sea de tipo bool
    if(!valor2->isTypeBooleano()){

        tabla->tablaError->insertErrorSemantic(
                    "Para evaluar la condición solo se permiten valores booleanos, no de tipo"+valor2->valor->tipo,
                    lst_Atributos->getToken(0));
        return retorno;
    }

   itemValor* valor=operarCondicion(valor2,entor);
    /*
     * CREANDO UN NUEVO ENTORNO
    */

    elementoEntorno *entornoSi=new elementoEntorno(entor,tabla,"si_simplificado",entor->este);
    entornoSi->nivel=entor->nivel+1;


   _VALOR *_nodVal1=(_VALOR*)hijos[1];
   _VALOR *_nodVal2=(_VALOR*)hijos[2];

    QString temp=tabla->getEtiqueta();
    tabla->linea2(valor->c3dF+":",entornoSi->nivel);
    //la parte falsa
    retorno=_nodVal2->getValorT(entor,new token(""));
    tabla->linea(temp+" = "+retorno->c3d,entor->nivel);
    tabla->linea("goto "+valor->c3dS, entornoSi->nivel);
    tabla->linea2(valor->c3dV+":",entornoSi->nivel);
    //la parte verdadera
    retorno=_nodVal1->getValorT(entor,new token(""));
    tabla->linea(temp+" = "+retorno->c3d,entor->nivel);
    tabla->linea2(valor->c3dS+":",entornoSi->nivel);

    retorno->c3d=temp;

    return retorno;
}



itemValor * _SI_SIMPLIFICADO::operarCondicion(itemValor *valor,elementoEntorno *entor){

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


