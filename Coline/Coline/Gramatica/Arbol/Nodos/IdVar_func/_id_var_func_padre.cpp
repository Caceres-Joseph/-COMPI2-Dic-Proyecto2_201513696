#include "_id_var_func_padre.h"

#include "Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.h"

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

    }else if(nivel == 8)
    // tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }else if(nivel == 9)
    // valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }


    return retorno;
}




itemRetorno* _ID_VAR_FUNC_PADRE::ejecutar(elementoEntorno *entor){
    itemRetorno *retorno=new itemRetorno(0);
    //println("ejecutando:"+QString::number(nivel));
    if(nivel==1)
    // ID_VAR_FUNC  LST_PUNTOSP
    {

    }else if(nivel == 2)
    // tEste  sPunto  valId
    {
        tabla->tablaError->insertErrorSemantic("No se puede ejecutar una variable del tipo este.[id]",lst_Atributos->getToken(0));
        return retorno;
    }else if(nivel == 3)
    // valId
    {
        tabla->tablaError->insertErrorSemantic("No se puede ejecutar una variable del tipo [id]",lst_Atributos->getToken(0));
        return retorno;

    }else if(nivel == 4)
    // tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent
    {
        ejecutarMetodo(entor);
    }else if(nivel == 5)
    // valId  sAbreParent  LST_VAL  sCierraParent
    {

        ejecutarMetodo(entor);
    }else if(nivel == 6)
    // tEste  sPunto  valId  LST_CORCHETES_VAL
    {
        tabla->tablaError->insertErrorSemantic("No se puede ejecutar una variable del tipo este.[id][Corchetes]",lst_Atributos->getToken(0));
        return retorno;

    }else if(nivel == 7)
    // valId  LST_CORCHETES_VAL
    {

        tabla->tablaError->insertErrorSemantic("No se puede ejecutar una variable del tipo [id][Corchetes]",lst_Atributos->getToken(0));
        return retorno;
    }else if(nivel == 8)
    // tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {
        tabla->tablaError->insertErrorSemantic("No se puede ejecutar una variable del tipo este.([id])[Corchetes]",lst_Atributos->getToken(0));
        return retorno;
    }else if(nivel == 9)
    // valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {
        tabla->tablaError->insertErrorSemantic("No se puede ejecutar una variable del tipo ([id])[Corchetes]",lst_Atributos->getToken(0));
        return retorno;
    }

    return retorno;
}

itemValor *_ID_VAR_FUNC_PADRE::ejecutarMetodoRetorno(elementoEntorno *entor){


    itemValor *valor=cargarMetodo(entor);

    QString temp=tabla->getEtiqueta();

    tabla->linea(temp+" = Stack[P]", entor->nivel, "retorno");
    valor->c3d=temp;

    QString tamAmbito=QString::number(entor->tamEntornoAbsoluto());
    tabla->linea("P = P - "+tamAmbito,entor->nivel);

    return valor;
}


void _ID_VAR_FUNC_PADRE::ejecutarMetodo(elementoEntorno *entor){
    cargarMetodo(entor);
    QString tamAmbito=QString::number(entor->tamEntornoAbsoluto());
    tabla->linea("P = P - "+tamAmbito,entor->nivel);
}

itemValor *_ID_VAR_FUNC_PADRE::cargarMetodo(elementoEntorno *entor){
    tabla->comentarioLinea("Llamado a funcion",entor->nivel);

    _LST_VAL *nodoVal=(_LST_VAL*)hijos[0];
    QList<itemValor*> lstValores=nodoVal->getLstValores(entor);
    token *nombre=lst_Atributos->getToken(0);
    itemValor *val=entor->este->getMetodo(nombre,lstValores);
    QString cadParams=entor->este->cuerpoClase->lstMetodo_funcion->cadParams(lstValores);


    QString tamAmbito=QString::number(entor->tamEntornoAbsoluto());

    //Cargando parámetros
    for (int i = 0; i < lstValores.count(); ++i) {
        itemValor *val=lstValores[i];
        QString pivote=tabla->getEtiqueta();
        tabla->linea(pivote+" = P + "+tamAmbito, entor->nivel,"pivote");
        QString direc=tabla->getEtiqueta();
        tabla->linea(direc+" = "+pivote +" + "+QString::number(i+1),entor->nivel);
        tabla->linea("Stack["+direc+"] = "+val->c3d,entor->nivel,"param:"+val->valor->tipo);
    }

    tabla->linea("P = P + "+tamAmbito,entor->nivel);
    tabla->linea(entor->este->cuerpoClase->nombreClase->valLower+"_"+nombre->valLower+cadParams+"()", entor->nivel);
    return val;
}

