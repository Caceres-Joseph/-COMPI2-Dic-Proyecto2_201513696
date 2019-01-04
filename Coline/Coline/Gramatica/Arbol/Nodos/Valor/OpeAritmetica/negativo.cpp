#include "negativo.h"

negativo::negativo(nodoModelo *hijo1, tablaSimbolos *tabla, token *signo):opModelo(hijo1,tabla,signo){
}

itemValor *negativo::opNegativo(elementoEntorno *entorno){

    itemValor *retorno=new itemValor();
    itemValor *val1=hijo1->getValor(entorno);

    /*
    |--------------------------------------------------------------------------
    | Booleano
    |--------------------------------------------------------------------------
    */
    /*
     * Booleano = Entero
     */
    if ( val1->isTypeBooleano())
    {
        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = 0 - "+val1->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);

    }

    /*
     *  Entero = Entero
     */

    else if (val1->isTypeEntero())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = 0 - "+val1->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);

    }



    /*
     *  Decimal = Decimal
     */

    else if (val1->isTypeDecimal())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = 0 - "+val1->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(10.12,temp);

    }

    /*
     *  Char = Entero
     */
    else if( val1->isTypeChar()){


        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = 0 - "+val1->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);

    }

    /*
     * Else
    */
    else
    {
        tabla->tablaError->insertErrorSemantic("No se pueden operar [negativo] " + val1->valor->tipo, signo);
    }

    return retorno;
}

void negativo::println(QString mensaje)
{
    std::cout<<"[negativo]"<<mensaje.toStdString()<<std::endl;
}
