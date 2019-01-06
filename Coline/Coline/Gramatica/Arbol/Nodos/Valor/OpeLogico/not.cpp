#include "not.h"

Not::Not(nodoModelo *hijo1, tablaSimbolos *tabla, token *signo):opModelo(hijo1,tabla,signo){


}

itemValor *Not::opNot(elementoEntorno *entorno, QString simbolo){
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
        tabla->tablaError->insertErrorSemantic("Sólo se puede aplicar OR de esta forma -> opRelacional [NOT] opRelacional",signo);
    }


    //intercambio los valores de las etiquetas
    retorno=new itemValor(false,"0");
    retorno->c3dF=val1->c3dV;
    retorno->c3dV=val1->c3dF;
    retorno->c3dS=val1->c3dS;


    entorno->etqVerdadero="";
    entorno->etqSalida="";
    entorno->etqFalso="";

    return retorno;
}

void Not::println(QString mensaje)
{
    std::cout<<"{Not]"<<mensaje.toStdString()<<std::endl;
}
