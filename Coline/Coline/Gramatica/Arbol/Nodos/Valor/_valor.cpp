#include "_valor.h"

void _VALOR::ejecutarConstructor(elementoEntorno *entor, QString este, objetoClase *clase){

    //validando si tiene constructor
    if(clase->cuerpoClase->lstConstructores->listaPolimorfa.count()==0)
    {
        //no tiene constructor
        return;
    }


    tabla->comentarioLinea("Llamado al constructor",entor->nivel);

    _LST_VAL *nodoVals=(_LST_VAL*)hijos[0];
    QList<itemValor*> lstValores= nodoVals->getLstValoresConCad(entor);


    token *nombre=lst_Atributos->getToken(0);
    itemValor *val=clase->getConstructor(nombre, lstValores);

    QString cadParams=clase->cuerpoClase->lstConstructores->cadParams(lstValores);

    //Colocando el this
    tabla->func_colocarParam(este,1,entor);


    //Cargando parámetros
    for (int i = 0; i < lstValores.count(); ++i) {
        itemValor *val=lstValores[i];
        tabla->func_colocarParam(val->c3d,i+2,entor);
    }

    tabla->func_llamarFunc(clase->cuerpoClase->nombreClase->valLower+"_"+nombre->valLower+cadParams, entor);

}

itemValor * _VALOR::getObjeto(elementoEntorno *entor){
    itemValor *retorno=new itemValor();

    //nombre del objeto
    token *idObjeto= lst_Atributos->getToken(0);
    //buscando el objeto si existe
    elementoClase *tempClase=tabla->getClase(idObjeto);
    if(tempClase==NULL)
        return retorno;


    //creamos el nuevo metodo
    objetoClase *objClase=new objetoClase(tempClase,tabla);



    /*-------------------------
     * Cargando las variables globales
    */

    //guardo la primera posicion
    QString etqRetorno= tabla->getEtiqueta();

    QString este=tabla->getEtiqueta();
    tabla->comentarioLinea("Cargando los atributos del objeto", entor->nivel);
    tabla->linea(etqRetorno+" = H", entor->nivel, "Pos inicial del objeto");
    tabla->linea("Stack[0] = H",entor->nivel,"This para globales");
    tabla->linea(este+ " = H", entor->nivel, "This");
    objClase->ejecutarGlobales(entor);


    /*-------------------------
     * Ejecutando constructor
    */
    ejecutarConstructor(entor,este, objClase);


    retorno = new itemValor(objClase,etqRetorno);
    return retorno;
}


itemValor * _VALOR::getValor(elementoEntorno *elemento, token *tipo){
    itemValor *retorno=new itemValor();

    if(nivel==1){
        return getObjeto(elemento);
    }else if(nivel ==2){

    }else if(nivel==3){
        _LST_LLAVES_VAL *nodoLlaves=(_LST_LLAVES_VAL*)hijos[0];
        retorno->dimensiones=nodoLlaves->getLstValores(elemento);

    }else if(nivel==4){
        _E *nodoE=(_E*)hijos[0];
        return nodoE->getValor(elemento);
    }else if(nivel==5){
        _SI_SIMPLIFICADO *nodoSimp=(_SI_SIMPLIFICADO*)hijos[0];
        return nodoSimp->getValor(elemento);
    }

    return retorno;
}


itemValor * _VALOR::getValorT(elementoEntorno *entor, token *tipo){

    itemValor *valor= getValor(entor,tipo);

    if(valor->c3dV!=""){
        QString temp=tabla->getEtiqueta();


        tabla->linea2(valor->c3dF+":",entor->nivel);
        tabla->linea(temp+" = 0",entor->nivel);
        tabla->linea("goto "+valor->c3dS, entor->nivel);
        tabla->linea2(valor->c3dV+":",entor->nivel);
        tabla->linea(temp+" = 1",entor->nivel);
        tabla->linea2(valor->c3dS+":",entor->nivel);

        valor->c3d=temp;
        valor->c3dF="";
        valor->c3dS="";
        valor->c3dV="";
        return valor;
    }else{
        return valor;
    }
}




