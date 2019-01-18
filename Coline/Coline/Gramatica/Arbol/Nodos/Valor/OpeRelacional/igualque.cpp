#include "igualque.h"


IgualQue::IgualQue(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo):opModelo(hijo1,hijo2,tabla,signo){
}

itemValor *IgualQue::opIgualacion(elementoEntorno *entorno, QString simbolo){

    itemValor *retorno=new itemValor();
    itemValor *val1=hijo1->getValor(entorno);
    itemValor *val2=hijo2->getValor(entorno);

    /*
    |--------------------------------------------------------------------------
    | Booleano
    |--------------------------------------------------------------------------
    */
    itemValor *it1=new itemValor();
    itemValor *it2=it1->convertirATipo(new token(val1->valor->tipo));


    itemValor *it4=it1->convertirATipo(new token(val2->valor->tipo));


    if ((
             it2->isTypeBooleano()||
             it2->isTypeChar()||
             it2->isTypeDecimal()||
             it2->isTypeEntero()||
             it2->isTypeNulo()||
             it2->isTypeObjeto()
         )&& (
            it4->isTypeBooleano()||
            it4->isTypeChar()||
            it4->isTypeDecimal()||
            it4->isTypeEntero()||
            it4->isTypeNulo()||
            it4->isTypeObjeto()
         ))
    {

        if(val1->dimen==0&&val1->dimensiones.count()>0&&val1->isTypeChar()){
            int resultadoFinal=0;
            for (int i = 0; i < val1->dimensiones.count(); ++i) {
                if(val1->dimensiones[i]->isTypeChar()){

                    p_caracter *valChar=(p_caracter*)val1->dimensiones[i]->valor;
                    int valCaracter=(int)valChar->valor;
                    resultadoFinal+=valCaracter;
                }
            }
            itemValor *val3=new itemValor(resultadoFinal,QString::number(resultadoFinal));
            val1->c3d=val3->c3d;
            val1->valor=val3->valor;
        }


        if(val2->dimen==0&&val2->dimensiones.count()>0&&val2->isTypeChar()){
            int resultadoFinal=0;
            for (int i = 0; i < val2->dimensiones.count(); ++i) {
                if(val2->dimensiones[i]->isTypeChar()){

                    p_caracter *valChar=(p_caracter*)val2->dimensiones[i]->valor;
                    int valCaracter=(int)valChar->valor;
                    resultadoFinal+=valCaracter;
                }
            }
           itemValor *val3=new itemValor(resultadoFinal,QString::number(resultadoFinal));
           val2->c3d=val3->c3d;
           val2->valor=val3->valor;
        }



        if(val1->isTypeChar()){
            //tengo que sacarlo de pool
            QString etqChar=tabla->getEtiqueta();
            tabla->linea(etqChar+" = Pool["+val1->c3d+"]", entorno->nivel,"Valor de pool");
            val1->c3d=etqChar;
        }

        if(val2->isTypeChar()){
            QString etqChar=tabla->getEtiqueta();
            tabla->linea(etqChar+" = Pool["+val2->c3d+"]", entorno->nivel,"Valor de pool");
            val2->c3d=etqChar;

        }


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
        tabla->tablaError->insertErrorSemantic("No se pueden operar - ["+simbolo+"] " + val1->valor->tipo + " con " + val2->valor->tipo, signo);
    }

    return retorno;
}

void IgualQue::println(QString mensaje)
{
    std::cout<<"{IgualQue]"<<mensaje.toStdString()<<std::endl;
}
