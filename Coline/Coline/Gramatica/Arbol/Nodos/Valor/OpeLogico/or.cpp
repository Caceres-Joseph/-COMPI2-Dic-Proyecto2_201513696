#include "or.h"
#include "Coline/Elementos/Items/itemvalor.h"


Or::Or(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo):opModelo(hijo1,hijo2,tabla,signo){
}

itemValor *Or::opOr(elementoEntorno *entorno, QString simbolo){
    itemValor *retorno=new itemValor(false,"");

    /*
     * Validando para la precedencia
     *
    */

    if(hijo2->lst_Atributos->listaAtributos[0]->nombretoken=="sAnd"){
        return opOr2(entorno,simbolo);
    }


    /*
     * ------------
     * VALOR 1
     * ------------
    */
    itemValor *val1=hijo1->getValor(entorno);
    if (!(val1->isTypeBooleano()||val1->isTypeDecimal()||val1->isTypeEntero()))
    {
        tabla->tablaError->insertErrorSemantic("No se pueden operar ["+simbolo+"] " + val1->valor->tipo+" con [rel]", signo);
    }
    if(val1->c3dS == ""){
        tabla->tablaError->insertErrorSemantic("Sólo se puede aplicar OR de esta forma -> opRelacional [OR] opRelacional",signo);
    }

    tabla->linea2(val1->c3dF+":", entorno->nivel);
    entorno->etqVerdadero=val1->c3dV;
    entorno->etqSalida=val1->c3dS;
    entorno->etqFalso="";

    /*
     * ------------
     * VALOR 2
     * ------------
    */

    itemValor *val2=hijo2->getValor(entorno);
    if (!(val2->isTypeBooleano()||val2->isTypeDecimal()||val2->isTypeEntero()))
    {
        tabla->tablaError->insertErrorSemantic("No se pueden operar ["+simbolo+"] [rel] con " + val2->valor->tipo, signo);
    }
    if(val2->c3dS == ""){
        tabla->tablaError->insertErrorSemantic("Sólo se puede aplicar OR de esta forma -> opRelacional [OR] opRelacional",signo);

    }



    retorno=new itemValor(false,"0");
    retorno->c3dF=val2->c3dF;
    retorno->c3dV=val2->c3dV;
    retorno->c3dS=val2->c3dS;



    entorno->etqVerdadero="";
    entorno->etqSalida="";
    entorno->etqFalso="";


    return retorno;
}


itemValor *Or::opOr2(elementoEntorno *entorno, QString simbolo){
    itemValor *retorno=new itemValor(false,"");


    /*
     * ------------
     * VALOR 2
     * ------------
    */

    itemValor *val2=hijo2->getValor(entorno);
    if (!(val2->isTypeBooleano()||val2->isTypeDecimal()||val2->isTypeEntero()))
    {
        tabla->tablaError->insertErrorSemantic("No se pueden operar ["+simbolo+"] [rel] con " + val2->valor->tipo, signo);
    }
    if(val2->c3dS == ""){
        tabla->tablaError->insertErrorSemantic("Sólo se puede aplicar OR de esta forma -> opRelacional [OR] opRelacional",signo);

    }


    tabla->linea2(val2->c3dF+":", entorno->nivel);
    entorno->etqVerdadero=val2->c3dV;
    entorno->etqSalida=val2->c3dS;
    entorno->etqFalso="";

    /*
     * ------------
     * VALOR 1
     * ------------
    */
    itemValor *val1=hijo1->getValor(entorno);
    if (!(val1->isTypeBooleano()||val1->isTypeDecimal()||val1->isTypeEntero()))
    {
        tabla->tablaError->insertErrorSemantic("No se pueden operar ["+simbolo+"] " + val1->valor->tipo+" con [rel]", signo);
    }
    if(val1->c3dS == ""){
        tabla->tablaError->insertErrorSemantic("Sólo se puede aplicar OR de esta forma -> opRelacional [OR] opRelacional",signo);

    }


    retorno=new itemValor(false,"0");
    retorno->c3dF=val1->c3dF;
    retorno->c3dV=val1->c3dV;
    retorno->c3dS=val1->c3dS;



    entorno->etqVerdadero="";
    entorno->etqSalida="";
    entorno->etqFalso="";


    return retorno;
}



void Or::println(QString mensaje)
{
    std::cout<<"{Or]"<<mensaje.toStdString()<<std::endl;
}
