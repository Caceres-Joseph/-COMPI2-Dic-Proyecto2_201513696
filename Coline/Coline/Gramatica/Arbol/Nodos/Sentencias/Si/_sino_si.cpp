#include "_sino_si.h"


itemRetorno* _SINO_SI::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("sino si", entor->nivel);
    itemRetorno* ret=new itemRetorno(0);
    if(hayErrores())
        return ret;


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

    elementoEntorno *entornoSi=new elementoEntorno(entor,tabla,"sino_si",entor->este);
    entornoSi->nivel=entor->nivel+1;




    if( nivel==1)
    {
        cond1(valor,entornoSi);
    }else if(nivel==2)
    {
        cond2(valor,entornoSi);
    }else if(nivel==3)
    {

        cond3(valor,entornoSi);
    }
    return ret;
}



void _SINO_SI::cond1(itemValor *valor, elementoEntorno *entor)
// tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO_SI
{

    tabla->linea2(valor->c3dF+":",entor->nivel);
    //la parte falsa
    hijos[2]->ejecutar(entor->anterior);
    tabla->linea("goto "+valor->c3dS, entor->nivel);
    tabla->linea2(valor->c3dV+":",entor->nivel);
    //la parte verdadera
    hijos[1]->ejecutarHijos(entor);
    tabla->linea2(valor->c3dS+":",entor->nivel);


}

void _SINO_SI::cond2(itemValor *valor, elementoEntorno *entor)
// tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
{


    tabla->linea2(valor->c3dF+":",entor->nivel);
    tabla->linea("goto "+valor->c3dS, entor->nivel);
    tabla->linea2(valor->c3dV+":",entor->nivel);
    //la parte verdadera
    hijos[1]->ejecutarHijos(entor);
    tabla->linea2(valor->c3dS+":",entor->nivel);
}

void _SINO_SI::cond3(itemValor *valor, elementoEntorno *entor)
// tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO
{

    tabla->linea2(valor->c3dF+":",entor->nivel);
    //la parte falsa
    hijos[2]->ejecutar(entor->anterior);
    tabla->linea("goto "+valor->c3dS, entor->nivel);
    tabla->linea2(valor->c3dV+":",entor->nivel);
    //la parte verdadera
    hijos[1]->ejecutarHijos(entor);
    tabla->linea2(valor->c3dS+":",entor->nivel);
}


itemValor * _SINO_SI::operarCondicion(itemValor *valor,elementoEntorno *entor){

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
