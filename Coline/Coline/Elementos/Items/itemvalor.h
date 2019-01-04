#ifndef ITEMVALOR_H
#define ITEMVALOR_H

/*
|--------------------------------------------------------------------------
| IMPORTACIONES
|--------------------------------------------------------------------------
*/

#include "Coline/Elementos/Global/importar.h"

/*
 * TIPOS
*/
#include "Coline/Elementos/Primitivos/p_modelo.h"
#include "Coline/Elementos/Primitivos/p_entero.h"

#include "Coline/Elementos/Primitivos/p_cadena.h"
#include "Coline/Elementos/Primitivos/p_booleano.h"
#include "Coline/Elementos/Primitivos/p_caracter.h"
#include "Coline/Elementos/Primitivos/p_decimal.h"
#include "Coline/Elementos/Primitivos/p_nulo.h"


/*
|--------------------------------------------------------------------------
| CLASE
|--------------------------------------------------------------------------
*/
class itemValor
{
public:
    p_modelo *valor;
    QString c3d;

    QString c3dV="";
    QString c3dF="";
    QString c3dS="";

    /*
    |--------------------------------------------------------------------------
    | TIPOS QUE SOPORTA EL LENGUAJE
    |--------------------------------------------------------------------------
    | cadena
    | booleano
    | entero
    | decimal
    | nulo
    | objeto
    | vacio
    | arreglo
    */

    /*
    |----------------
    | CONSTRUCTORES
    |----------------
    */

    itemValor(){
        p_nulo *ent=new p_nulo();
        this->valor=ent;
        this->c3d="0";
    }

    itemValor(double valor,QString c3d){
        p_decimal *ent =new p_decimal(valor);
        this->valor=ent;
        this->c3d=c3d;
    }

    itemValor(int valor, QString c3d){
        p_entero *ent =new p_entero(valor);
        this->valor=ent;
        this->c3d=c3d;
    }
    itemValor(char valor, QString c3d){
        p_caracter *ent =new p_caracter(valor);
        this->valor=ent;
        this->c3d=c3d;
    }

    itemValor(bool valor, QString c3d){
        p_booleano *ent=new p_booleano(valor);
        this->valor=ent;
        this->c3d=c3d;
    }

    itemValor(QString valor, QString c3d){
        p_cadena *ent=new p_cadena(valor);
        this->valor=ent;
        this->c3d=c3d;
    }

    bool isTypeCadena();
    bool isTypeBooleano();
    bool isTypeEntero();
    bool isTypeDecimal();
    bool isTypeNulo();
    bool isTypeObjeto();
    bool isTypeVacio();
    bool isTypeChar();


};

#endif // ITEMVALOR_H
