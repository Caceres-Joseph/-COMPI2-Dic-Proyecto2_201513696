#include "_id_var_func.h"

#include "Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes_val.h"
itemValor *_ID_VAR_FUNC::getDestino(elementoEntorno *entorno){

    itemValor *retorno=new itemValor();
    if(nivel==1)
    // ID_VAR_FUNC  LST_PUNTOSP
    {

    }else if(nivel == 2)
    // tEste  sPunto  valId
    {
        QString etqDir=tabla->getEtiqueta();
        tabla->linea(etqDir+" = P + 1", entorno->nivel, "Posicion del this");
        QString valThis=tabla->getEtiqueta();
        tabla->linea(valThis+" = Stack["+etqDir+"]", entorno->nivel, "Val this");

        //tengo que buscar la variable en el entorno global, si y solo si
        itemEntorno *val=entorno->getValIdGlobal(lst_Atributos->getToken(0));


        QString pos=tabla->getEtiqueta();
        tabla->linea(pos+" = "+valThis+" + "+QString::number(val->pos), entorno->nivel);

        QString stack="Heap["+pos+"]";

        itemValor *vale=new itemValor();
        vale->valor=val->valor->valor;
        vale->c3d=stack;
        return vale;

    }else if(nivel == 3)
    // valId
    {
        //tengo que buscar la variable en el entorno *
        itemEntorno *val=entorno->getValId(lst_Atributos->getToken(0));
        itemValor *valor=val->valor;
        QString pos=tabla->getEtiqueta();
        QString puntero="P";


        QString stack="Stack";
        if(val->esGlobal){
            stack="Heap";
            puntero="H";
        }


        tabla->linea(pos+" = "+puntero+" + "+QString::number(val->pos), entorno->nivel);
        stack+="["+pos+"]";

        itemValor *vale=new itemValor();
        vale->valor=valor->valor;
        vale->c3d=stack;
        return vale;

    }else if(nivel == 4)
    // tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent
    {
        return ejecutarMetodoRetorno(entorno);
    }else if(nivel == 5)
    // valId  sAbreParent  LST_VAL  sCierraParent
    {
        return ejecutarMetodoRetorno(entorno);
    }else if(nivel == 6)
    // tEste  sPunto  valId  LST_CORCHETES_VAL
    {

    }else if(nivel == 7)
    // valId  LST_CORCHETES_VAL
    {

        //tengo que buscar la variable en el entorno *
        itemEntorno *val=entorno->getValId(lst_Atributos->getToken(0));
        itemValor *valor=val->valor;
        QString pos=tabla->getEtiqueta();
        QString puntero="P";


        QString stack="Stack";
        if(val->esGlobal){
            stack="Heap";
            puntero="H";
        }


        tabla->linea(pos+" = "+puntero+" + "+QString::number(val->pos), entorno->nivel);
        QString direcArreglo=tabla->getEtiqueta();
        stack+="["+pos+"]";
        tabla->linea(direcArreglo + " = "+stack, entorno->nivel);

        //posicion donde inicia el arreglo etqDir2
        //ahora hay que mapear
        _LST_CORCHETES_VAL *nodoVal=(_LST_CORCHETES_VAL*)hijos[0];
        QList<itemValor*>lstValores=  nodoVal->getLstValores(entorno);

        //calculando indice real
        QString indiceReal=getIndiceMapeado(lstValores,direcArreglo,entorno);



        tabla->comentarioLinea("Get item from index", entorno->nivel);
        QString etqDir2=tabla->getEtiqueta();
        QString etqInd=tabla->getEtiqueta();

        //buscando la dimension
        tabla->linea(etqDir2+" = "+direcArreglo+ " + "+QString::number(lstValores.count()),entorno->nivel);
        tabla->linea(etqInd+" = "+etqDir2+" + "+indiceReal, entorno->nivel);


        itemValor *vale=new itemValor();
        vale->c3d="Heap["+etqInd+"]";
        vale->valor=valor->valor;
        return vale;

    }else if(nivel == 8)
    // tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }else if(nivel == 9)
    // valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }

    return retorno;

}
