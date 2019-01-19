#include "_lst_puntosp_padre.h"
#include "Coline/Elementos/Objetos/objetoclase.h"


#include "Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes_val.h"
/*
|-------------------------------------------------------------------------------------------------------------------
| GET VALOR
|-------------------------------------------------------------------------------------------------------------------
|
*/

itemValor *_LST_PUNTOSP_PADRE::getValor2(elementoEntorno *entor, itemValor *item){

    itemValor *retorno=new itemValor();
    /*-------------------------
     * Verificando que sea objeto
    */
    if(!item->isTypeObjeto()){
        tabla->tablaError->insertErrorSemantic("Se epseraba un objeto [objeto].[atributo]",lst_Atributos->getToken(0));
        return retorno;
    }
    p_objeto *pObj=(p_objeto*)item->valor;
    objetoClase *obj=pObj->valor;

    return ejecutarMetodoRetorno1(entor,obj,item);
}

itemValor *_LST_PUNTOSP_PADRE::getValor1(elementoEntorno *entor, itemValor *item){

    itemValor *retorno=new itemValor();
    if(!item->isTypeObjeto()){
        tabla->tablaError->insertErrorSemantic("Se epseraba un objeto [objeto].[atributo]",lst_Atributos->getToken(0));
        return retorno;
    }

    p_objeto *pObj=(p_objeto*)item->valor;
    objetoClase *obj=pObj->valor;



    QString valThis=item->c3d;

    //tengo que buscar la variable en el entorno global, si y solo si

    itemEntorno *val=obj->este->getValIdGlobal(lst_Atributos->getToken(0));
    QString pos=tabla->getEtiqueta();
    tabla->linea(pos+" = "+valThis+" + "+QString::number(val->pos), entor->nivel);
    QString etqValor=tabla->getEtiqueta();

    tabla->linea(etqValor+" = Heap["+pos+"]", entor->nivel);


    itemValor *vale=new itemValor();
    vale->valor=val->valor->valor;
    vale->dimensiones=val->valor->dimensiones;
    vale->dimen=val->valor->dimen;
    vale->c3d=etqValor;

    return vale;
}
//

//sPunto  valId  LST_CORCHETES_VAL
itemValor *_LST_PUNTOSP_PADRE::getValor3(elementoEntorno *entor, itemValor *item){



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
    QString etqValor=tabla->getEtiqueta();
    tabla->linea(etqValor+" = Heap["+etqInd+"]",entor->nivel);


    itemValor *valT=new itemValor();
    valT->c3d=etqValor;
    valT->c3dF="";
    valT->c3dS="";
    valT->c3dV="";
    valT->valor=valor->valor;
    valT->dimen=0;


    return valT;

}
itemValor* _LST_PUNTOSP_PADRE::getValor(elementoEntorno *entor, itemValor *item)
{
    if(nivel == 1)
    //sPunto  valId
    {
        return getValor1(entor, item);
    }else if(nivel == 2)
    //sPunto  valId  sAbreParent  LST_VAL  sCierraParent
    {
        return getValor2(entor, item);

    }else if(nivel == 3)
    //sPunto  valId  LST_CORCHETES_VAL
    {
        return getValor3(entor, item);

    }else if(nivel == 4)
    //sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }

    return new itemValor();

}


/*
|-------------------------------------------------------------------------------------------------------------------
| METODOS AUXILIARES
|-------------------------------------------------------------------------------------------------------------------
|
*/

itemValor *_LST_PUNTOSP_PADRE::ejecutarMetodoRetorno1(elementoEntorno *entor, objetoClase *objeto, itemValor *origen){


    itemValor *valor=cargarMetodo1(entor, objeto,origen);;

    QString temp=tabla->getEtiqueta();
    tabla->linea(temp+" = Stack[P]", entor->nivel, "Retorno");
    valor->c3d=temp;

    QString tamAmbito=QString::number(entor->tamEntornoAbsoluto());
    tabla->linea("P = P - "+tamAmbito,entor->nivel);



    //hay que buscar de que tipo es la funcion
    itemValor *it1=new itemValor();
    itemValor *it2=it1->convertirATipo(new token(valor->valor->tipo));
    if(it2->isTypeObjeto()){
        //tengo que cargar en valor la clase con el objeto

        //buscando el objeto si existe
        elementoClase *tempClase=tabla->getClase(new token(valor->valor->tipo));
        if(tempClase==NULL){
            tabla->tablaError->insertErrorSemantic("El objeto :"+valor->valor->tipo+" no existe", lst_Atributos->getToken(0));
            return valor;
        }

        //creamos el nuevo metodo
        objetoClase *objClase=new objetoClase(tempClase,tabla);
        itemValor *vale=new itemValor(objClase,"t");
        valor->valor=vale->valor;

    }else if(it2->isTypeBooleano()){
        itemValor *t3=new itemValor(true,"1");
        valor->valor=t3->valor;
    }else if(it2->isTypeChar()){
        itemValor *t3=new itemValor('a',"1");
        valor->valor=t3->valor;
    }else if(it2->isTypeEntero()){
        itemValor*t3=new itemValor(2,"a");
        valor->valor=t3->valor;
    }else if(it2->isTypeDecimal()){
        itemValor*t3=new itemValor(12.43,"a");
        valor->valor=t3->valor;
    }


    if(valor->dimen>0){
        itemValor *ite=new itemValor(12,"12");
        valor->dimensiones.append(ite);
    }


    return valor;
}


void _LST_PUNTOSP_PADRE::ejecutarMetodo1(elementoEntorno *entor, objetoClase *objeto, itemValor *origen){
    cargarMetodo1(entor, objeto,origen);
    QString tamAmbito=QString::number(entor->tamEntornoAbsoluto());
    tabla->linea("P = P - "+tamAmbito,entor->nivel);
}

itemValor *_LST_PUNTOSP_PADRE::cargarMetodo1(elementoEntorno *entor, objetoClase *objeto, itemValor *origen){
    tabla->comentarioLinea("Llamado a funcion desde objeto",entor->nivel);


    /*-------------------------
     * Recuperando valores
    */
    _LST_VAL *nodoVal=(_LST_VAL*)hijos[0];
    QList<itemValor*> lstValores=nodoVal->getLstValores(entor);
    token *nombre=lst_Atributos->getToken(0);
    itemValor *val=objeto->este->este->getMetodo(nombre,lstValores);
    QString cadParams=objeto->este->este->cuerpoClase->lstMetodo_funcion->cadParams(lstValores);
    QString tamAmbito=QString::number(entor->tamEntornoAbsoluto());

    /*-------------------------
     * Colocando el this
    */
    QString etqThis1=tabla->getEtiqueta();
    QString etqThis=tabla->getEtiqueta();

    tabla->linea(etqThis1+" = P + "+tamAmbito,entor->nivel, "Pivote");
    tabla->linea(etqThis+" = "+etqThis1+" + 1",entor->nivel ,"Direc This");
    tabla->linea("Stack["+etqThis+"] = "+origen->c3d, entor->nivel,"Valor del this");


    /*-------------------------
     * Colocando los parametros
    */

    //Cargando parámetros
    for (int i = 0; i < lstValores.count(); ++i) {
        itemValor *val=lstValores[i];
        tabla->func_colocarParam(val->c3d,i+2,entor);
    }

    tabla->linea("P = P + "+tamAmbito,entor->nivel);
    tabla->linea(objeto->este->este->cuerpoClase->nombreClase->valLower+"_"+nombre->valLower+cadParams+"()", entor->nivel);
    return val;
}

/*
|-------------------------------------------------------------------------------------------------------------------
| EJECUTAR
|-------------------------------------------------------------------------------------------------------------------
|
*/
void _LST_PUNTOSP_PADRE::ejecutarSent2(elementoEntorno *entor, itemValor *item)
{

    /*-------------------------
     * Verificando que sea objeto
    */
    if(!item->isTypeObjeto()){
        tabla->tablaError->insertErrorSemantic("Se epseraba un objeto [objeto].[atributo]",lst_Atributos->getToken(0));
        return;
    }
    p_objeto *pObj=(p_objeto*)item->valor;
    objetoClase *obj=pObj->valor;

    ejecutarMetodo1(entor,obj,item);
}


void _LST_PUNTOSP_PADRE::ejecutarSent(elementoEntorno *entor, itemValor *item)
{
    if(nivel == 1)
    //sPunto  valId
    {
        tabla->tablaError->insertErrorSemantic("No se puede ejecutar una vairable [objeto].[atritubo]", lst_Atributos->getToken(0));
    }else if(nivel == 2)
    //sPunto  valId  sAbreParent  LST_VAL  sCierraParent
    {
        ejecutarSent2(entor, item);
    }else if(nivel == 3)
    //sPunto  valId  LST_CORCHETES_VAL
    {

    }else if(nivel == 4)
    //sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
    {

    }


}




QString _LST_PUNTOSP_PADRE::getIndiceMapeado(QList<itemValor *> lstValores, QString direcArreglo, elementoEntorno *entorno){

    tabla->comentarioLinea("Mapeando indice",entorno->nivel);

    QString etqAnterior = "1";
    for (int i = 0; i < lstValores.count(); ++i) {
        itemValor *elem=lstValores[i];

        if(i==0){

            etqAnterior=elem->c3d;

        }else{

            QString etqDir2=tabla->getEtiqueta();
            QString etqSize=tabla->getEtiqueta();

            //buscando la dimension
            tabla->linea(etqDir2+" = "+direcArreglo+ " + "+QString::number(i),entorno->nivel);
            tabla->linea(etqSize+" = Heap["+etqDir2+"]", entorno->nivel);

            //operando
            QString etqT1=tabla->getEtiqueta();
            QString etqT2=tabla->getEtiqueta();
            tabla->linea(etqT1+" = "+etqAnterior+" * "+etqSize,entorno->nivel);
            tabla->linea(etqT2+" = "+etqT1+" + "+elem->c3d,entorno->nivel);

            etqAnterior=etqT2;
        }
    }
    return etqAnterior;
}

