#include "multiplicacion.h"


multiplicacion::multiplicacion(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo):opModelo(hijo1,hijo2,tabla,signo){
}

itemValor *multiplicacion::opMult(elementoEntorno *entorno){

    println("Operando multiplicación");
    itemValor *retorno=new itemValor();
    itemValor *val1=hijo1->getValor(entorno);
    itemValor *val2=hijo2->getValor(entorno);

    /*
    |--------------------------------------------------------------------------
    | Booleano
    |--------------------------------------------------------------------------
    */
    /*
     *Booleano [*] Booleano = Entero
     */
    if (val1->isTypeBooleano() && val2->isTypeBooleano())
    {
        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);

    }

    /*
     *Booleano [*] Entero = Entero
     */

    else if (val1->isTypeBooleano() && val2->isTypeEntero())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);

    }



    /*
     *Booleano [*] Decimal = Decimal
     */

    else if (val1->isTypeBooleano() && val2->isTypeDecimal())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(10.12,temp);

    }


    /*
     *Booleano [*] Cadena = Cadena
     */

    /*
     *Booleano [*] Char = Entero
     */
    else if(val1->isTypeBooleano() && val2->isTypeChar()){


        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);

    }
    /*
    |--------------------------------------------------------------------------
    | Entero
    |--------------------------------------------------------------------------
    */
    /*
     *Entero [*] Booleano = Entero
     */

    else if (val1->isTypeEntero() && val2->isTypeBooleano())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);

    }

    /*
     *Entero [*] Entero = Entero
     */

    else if (val1->isTypeEntero() && val2->isTypeEntero())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;


        tabla->linea(cadSum,entorno->nivel);

        retorno=new itemValor(1,temp);

    }


    /*
     *Entero [*] Decimal = Decimal
     */

    else if (val1->isTypeEntero() && val2->isTypeDecimal())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(10.1,temp);

    }

    /*
     *Entero [*] Cadena = Cadena


    else if (val1->isTypeEntero() && val2->isTypeCadena())
    {
        println("Falta_Concat -> Salida es cadena");
    }*/

    /*
     *Entero [*] Char = Entero
     */

    else if (val1->isTypeEntero() && val2->isTypeChar())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);

    }


    /*
    |--------------------------------------------------------------------------
    | Cadena
    |--------------------------------------------------------------------------
    */



    /*
    |--------------------------------------------------------------------------
    | Decimal
    |--------------------------------------------------------------------------
    */
    /*
     *Decimal [*] Booleano = Decimal
     */

    else if (val1->isTypeDecimal() && val2->isTypeBooleano())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(10.1,temp);
    }

    /*
     *Decimal [*] Numerico = Decimal
     */

    else if (val1->isTypeDecimal() && val2->isTypeEntero())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(10.1,temp);
    }

    /*
     *Decimal [*] Cadena = Cadena
     */

    /*
     *Decimal [*] Decimal = Decimal
     */

    else if (val1->isTypeDecimal() && val2->isTypeDecimal())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(10.12,temp);
    }
    /*
     *Decimal [*] Char = Decimal
     */

    else if (val1->isTypeDecimal() && val2->isTypeChar())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(10.12,temp);
    }

    /*
    |--------------------------------------------------------------------------
    | Char
    |--------------------------------------------------------------------------
    */
    /*
     *Char [*] Booleano = Entero
     */

    else if (val1->isTypeChar() && val2->isTypeBooleano())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);
    }

    /*
     *Char [*] Numerico = Entero
     */

    else if (val1->isTypeChar() && val2->isTypeEntero())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);
    }

    /*
     *Char [*] Cadena = Cadena*/


    /*
     *Char [*] Decimal = Decimal
     */

    else if (val1->isTypeChar() && val2->isTypeDecimal())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(10.12,temp);
    }
    /*
     *Char [*] Char = Entero
     */

    else if (val1->isTypeChar() && val2->isTypeChar())
    {

        QString temp=tabla->getEtiqueta();
        QString cadSum=temp+" = "+val1->c3d+" * "+val2->c3d;
        tabla->linea(cadSum,entorno->nivel);
        retorno=new itemValor(1,temp);
    }

    /*
     * Else
    */
    else
    {
        tabla->tablaError->insertErrorSemantic("No se pueden operar [multiplicacion] " + val1->valor->tipo + " con " + val2->valor->tipo, signo);
    }

    return retorno;
}

void multiplicacion::println(QString mensaje)
{
    std::cout<<"[multiplicacion]"<<mensaje.toStdString()<<std::endl;
}
