#include "_id_var_func_padre.h"


itemValor * _ID_VAR_FUNC_PADRE::getValor(elementoEntorno *entorno){

    itemValor *retorno=new itemValor();
    if(nivel==1)
    // ID_VAR_FUNC  LST_PUNTOSP
    {

    }else if(nivel == 2)
    // tEste  sPunto  valId
    {

    }else if(nivel == 3)
    // valId
    {
        //tengo que buscar la variable en el entorno *uto
        itemEntorno *val=entorno->getValId(lst_Atributos->getToken(0));
        itemValor *valor=val->valor;
        QString pos=tabla->getEtiqueta();
        QString puntero="P";
        QString temp= tabla->getEtiqueta();

        QString stack="Stack";
        if(val->esGlobal){
            stack="Heap";
            puntero="H";
        }


        tabla->linea(pos+" = "+puntero+" + "+QString::number(val->pos), entorno->nivel);
        stack+="["+pos+"]";
        tabla->linea(temp+" = "+ stack,entorno->nivel);
        valor->c3d=temp;
        return valor;

    }else if(nivel == 4)
    // tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent
    {

    }else if(nivel == 5)
    // valId  sAbreParent  LST_VAL  sCierraParent
    {

    }else if(nivel == 6)
    // tEste  sPunto  valId  LST_CORCHETES_VAL
    {

    }else if(nivel == 7)
    // valId  LST_CORCHETES_VAL
    {

    }else if(nivel == 8)
    // tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }else if(nivel == 9)
    // valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }


    return retorno;
}
