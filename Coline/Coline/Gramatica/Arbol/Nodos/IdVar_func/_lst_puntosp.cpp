#include "_lst_puntosp.h"

#include "Coline/Elementos/Objetos/objetoclase.h"

#include "Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes_val.h"

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

//sPunto  valId  LST_CORCHETES_VAL
itemValor*_LST_PUNTOSP::getDestino3(elementoEntorno *entor, itemValor *item){


    //---------------------------------------------------------------------------------------
    //itemValor *valor=getDireccionVar(lst_Atributos->getToken(0),entorno);
    itemValor *valor =getValor1(entor,item);
    _LST_CORCHETES_VAL *nodoVal=(_LST_CORCHETES_VAL*)hijos[0];
    QList<itemValor*>lstValores=  nodoVal->getLstValores(entor);
    QString direcArreglo = valor->c3d;

    //calculando indice real
    QString indiceReal=getIndiceMapeado(lstValores,direcArreglo,entor);
    tabla->comentarioLinea("Get item from index", entor->nivel);


    QString etqDir2=tabla->getEtiqueta();
    QString etqInd=tabla->getEtiqueta();

    //buscando la dimension
    tabla->linea(etqDir2+" = "+direcArreglo+ " + "+QString::number(lstValores.count()),entor->nivel);
    tabla->linea(etqInd+" = "+etqDir2+" + "+indiceReal, entor->nivel);


    itemValor *valT=new itemValor();
    valT->c3d="Heap["+etqInd+"]";
    valT->c3dF="";
    valT->c3dS="";
    valT->c3dV="";
    valT->valor=valor->valor;
    valT->dimen=0;


    return valT;
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
        return getDestino3(entor,item);
    }else if(nivel == 4)
    //sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {
        tabla->tablaError->insertErrorSemantic("No se puede asginar un valor a metodo()",lst_Atributos->getToken(0));
        return retorno;
    }

    return retorno;

}
