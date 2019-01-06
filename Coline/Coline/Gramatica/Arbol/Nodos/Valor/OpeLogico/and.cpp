#include "and.h"


And::And(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo):opModelo(hijo1,hijo2,tabla,signo){
}

itemValor *And::opAnd(elementoEntorno *entorno, QString simbolo){
    itemValor *retorno=new itemValor();

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

    //tabla->linea("goto "+val1->c3dF, entorno->nivel);
    tabla->linea2(val1->c3dV+":", entorno->nivel);
    entorno->etqVerdadero="";
    entorno->etqSalida=val1->c3dS;
    entorno->etqFalso=val1->c3dF;

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

void And::println(QString mensaje)
{
    std::cout<<"{And]"<<mensaje.toStdString()<<std::endl;
}
