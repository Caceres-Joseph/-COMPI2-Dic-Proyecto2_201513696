#include "_lst_puntosp.h"

#include "Coline/Elementos/Objetos/objetoclase.h"

itemValor *_LST_PUNTOSP::getDestino1(elementoEntorno *entor, itemValor *item){

    itemValor *retorno=new itemValor();
    if(!item->isTypeObjeto()){
        tabla->tablaError->insertErrorSemantic("Se esperaba un objeto [objeto].[atributo]",lst_Atributos->getToken(0));
        return retorno;
    }

    p_objeto *pObj=(p_objeto*)item->valor;
    objetoClase *obj=pObj->valor;



    QString valThis=item->c3d;

    //tengo que buscar la variable en el entorno global, si y solo si

    itemEntorno *val=obj->este->getValIdGlobal(lst_Atributos->getToken(0));
    QString pos=tabla->getEtiqueta();
    tabla->linea(pos+" = "+valThis+" + "+QString::number(val->pos), entor->nivel);

    //QString etqValor=tabla->getEtiqueta();
    //tabla->linea(etqValor+" = Heap["+pos+"]", entor->nivel);


    itemValor *vale=new itemValor();
    vale->valor=val->valor->valor;
    vale->dimensiones=val->valor->dimensiones;
    vale->dimen=val->valor->dimen;
    vale->c3d="Heap["+pos+"]";

    return vale;
}

itemValor* _LST_PUNTOSP::getDestino(elementoEntorno *entor, itemValor *item)
{
    itemValor *retorno=new itemValor();
    if(nivel == 1)
    //sPunto  valId
    {
        return getDestino1(entor, item);
    }else if(nivel == 2)
    //sPunto  valId  sAbreParent  LST_VAL  sCierraParent
    {

        tabla->tablaError->insertErrorSemantic("No se puede asginar un valor a metodo()",lst_Atributos->getToken(0));
        return retorno;
    }else if(nivel == 3)
    //sPunto  valId  LST_CORCHETES_VAL
    {

    }else if(nivel == 4)
    //sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {
    }

    return retorno;

}
