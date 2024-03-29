#include "_id_var_func.h"

#include "Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes_val.h"
itemValor *_ID_VAR_FUNC::getDestino(elementoEntorno *entorno){

    itemValor *retorno=new itemValor();
    if(nivel==1)
    // ID_VAR_FUNC  LST_PUNTOSP
    {
        _ID_VAR_FUNC *nodoFunc= (_ID_VAR_FUNC*)hijos[0];
        itemValor *tempPos=nodoFunc->getValor(entorno);


        _LST_PUNTOSP *nodoPuntos=(_LST_PUNTOSP*)hijos[1];
        itemValor *tempRet= nodoPuntos->getDestino(entorno,tempPos);

        return tempRet;

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
        vale->dimen=val->valor->dimen;
        vale->dimensiones=val->valor->dimensiones;
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

            QString etqDir=tabla->getEtiqueta();
            tabla->linea(etqDir+" = P + 1", entorno->nivel, "Posicion del this");
            QString valThis=tabla->getEtiqueta();
            tabla->linea(valThis+" = Stack["+etqDir+"]", entorno->nivel, "Val this");

            //tengo que buscar la variable en el entorno global, si y solo si
            itemEntorno *val1=entorno->getValIdGlobal(lst_Atributos->getToken(0));


            tabla->linea(pos+" = "+valThis+" + "+QString::number(val1->pos), entorno->nivel);

            stack="Heap";
        }else{

            tabla->linea(pos+" = "+puntero+" + "+QString::number(val->pos), entorno->nivel);

        }

        stack+="["+pos+"]";

        itemValor *vale=new itemValor();
        vale->valor=valor->valor;
        vale->dimen=valor->dimen;
        vale->dimensiones=valor->dimensiones;
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


        itemValor *valor=getDireccionVar(lst_Atributos->getToken(0),entorno);
        _LST_CORCHETES_VAL *nodoVal=(_LST_CORCHETES_VAL*)hijos[0];
        QList<itemValor*>lstValores=  nodoVal->getLstValores(entorno);
        QString direcArreglo = valor->c3d;

        //calculando indice real
        QString indiceReal=getIndiceMapeado(lstValores,direcArreglo,entorno);
        tabla->comentarioLinea("Get item from index", entorno->nivel);


        QString etqDir2=tabla->getEtiqueta();
        QString etqInd=tabla->getEtiqueta();

        //buscando la dimension
        tabla->linea(etqDir2+" = "+direcArreglo+ " + "+QString::number(lstValores.count()),entorno->nivel);
        tabla->linea(etqInd+" = "+etqDir2+" + "+indiceReal, entorno->nivel);
        //QString etqValor=tabla->getEtiqueta();
        //tabla->linea(etqValor+" = Heap["+etqInd+"]",entorno->nivel);


        itemValor *valT=new itemValor();
        valT->c3d="Heap["+etqInd+"]";
        valT->c3dF="";
        valT->c3dS="";
        valT->c3dV="";
        valT->valor=valor->valor;
        valT->dimen=0;
        return valT;

    }else if(nivel == 8)
    // tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }else if(nivel == 9)
    // valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }

    return retorno;

}
