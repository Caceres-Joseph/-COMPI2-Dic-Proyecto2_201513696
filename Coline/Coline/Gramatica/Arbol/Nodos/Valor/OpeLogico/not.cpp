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


    /*
    if(val1->c3dS == ""){
        tabla->tablaError->insertErrorSemantic("Sólo se puede aplicar OR de esta forma -> opRelacional [NOT] opRelacional",signo);
    }*/

    itemValor *temp1= operarCondicion2(val1,entorno);

    val1=temp1;

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


itemValor * Not::operarCondicion2(itemValor *valor,elementoEntorno *entor){

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



void Not::println(QString mensaje)
{
    std::cout<<"{Not]"<<mensaje.toStdString()<<std::endl;
}
