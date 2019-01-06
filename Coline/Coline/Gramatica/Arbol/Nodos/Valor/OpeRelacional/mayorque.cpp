#include "mayorque.h"


MayorQue::MayorQue(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo):opModelo(hijo1,hijo2,tabla,signo){
}

itemValor *MayorQue::opMayorQue(elementoEntorno *entorno, QString simbolo){

    itemValor *retorno=new itemValor();
    itemValor *val1=hijo1->getValor(entorno);
    itemValor *val2=hijo2->getValor(entorno);

    /*
    |--------------------------------------------------------------------------
    | Booleano
    |--------------------------------------------------------------------------
    */
    if ((
             val1->isTypeBooleano()||
             val1->isTypeChar()||
             val1->isTypeDecimal()||
             val1->isTypeEntero()
         )&& (
            val2->isTypeBooleano()||
            val2->isTypeChar()||
            val2->isTypeDecimal()||
            val2->isTypeEntero()
         ))
    {

        QString etqVerdad;
        QString etqFalso;
        QString etSalida;

        if(entorno->etqVerdadero!=""){
            etqVerdad=entorno->etqVerdadero;
        }else{
            etqVerdad=tabla->getSalto();
        }

        if(entorno->etqFalso!=""){
            etqFalso=entorno->etqFalso;
        }else{
            etqFalso=tabla->getSalto();
        }

        if(entorno->etqSalida!=""){
            etSalida=entorno->etqSalida;
        }else{
            etSalida=tabla->getSalto();
        }



        /*tabla->linea2(etqFalso+":",entorno->nivel);
         * tabla->linea("if("+val1->c3d+" "+simbolo+" "+val2->c3d+ ") goto "+etqVerdad, entorno->nivel);
        tabla->linea(temp+" = 0", entorno->nivel);
        tabla->linea("goto "+etSalida, entorno->nivel);
        tabla->linea2(etqVerdad+":",entorno->nivel);
        tabla->linea(temp+" = 1", entorno->nivel);
        tabla->linea2(etSalida+":",entorno->nivel);
        */


        tabla->linea2("if("+val1->c3d+" "+simbolo+" "+val2->c3d+ ") goto "+etqVerdad+";",entorno->nivel);
        tabla->linea("goto "+etqFalso, entorno->nivel);
        retorno=new itemValor(false,"0");
        retorno->c3dF=etqFalso;
        retorno->c3dV=etqVerdad;
        retorno->c3dS=etSalida;
    }


    /*
     * Else
    */
    else
    {
        tabla->tablaError->insertErrorSemantic("No se pueden operar ["+simbolo+"] " + val1->valor->tipo + " con " + val2->valor->tipo, signo);
    }

    return retorno;
}

void MayorQue::println(QString mensaje)
{
    std::cout<<"{MayorQue]"<<mensaje.toStdString()<<std::endl;
}
