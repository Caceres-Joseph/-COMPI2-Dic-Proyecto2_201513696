#include "_declarar_variable_sinvisibi.h"



void _DECLARAR_VARIABLE_SINVISIBI::cargarGlobales(elementoEntorno *entor){

    _TIPO *nodoTipo;
    nodoTipo = (_TIPO*)hijos[0];

    _VAR_ARREGLO *nodoVar;
    nodoVar = (_VAR_ARREGLO*)hijos[1];

    itemValor *valor=new itemValor();

    if(nivel == 1){
        _VAL *nodoVal=(_VAL*)hijos[2];
        //valor=nodoVal->getValor(entor,nodoTipo->getTipo());
    }

    elementoEntorno *entornoInservible=new elementoEntorno(NULL,tabla,"global",entor->este);
    entornoInservible->nivel=5;
    //tabla->comentarioLinea("Codigo inservible:"+entor->nombre,entornoInservible->nivel);
    QList<itemValor*> dimen=nodoVar->getDimensiones(entornoInservible);

    token *tokId=nodoVar->getIdentificador();
    token *tokTipo=nodoTipo->getTipo();


    /*-------------------------
     * Asignando el tipo
    */
    valor->c3dF="";
    valor->c3dV="";
    valor->c3dS="";

    valor->valor->tipo=tokTipo->valLower;
    valor->dimen=dimen.count();

    //validando si es de tipo objeto para cargar el objeto en valor
    itemValor *tempTipo=new itemValor();
    itemValor *tipoRes=tempTipo->convertirATipo(tokTipo);

    if(tipoRes->isTypeObjeto()){

        //hay que verificar si este es el tipo




        //es de tipo objeto, hay que buscar la clase para cargarla en el valor
        elementoClase* elemClase= tabla->getClase(tokTipo);

        if(elemClase->nombreClase->valLower==entor->este->cuerpoClase->nombreClase->valLower){

            tempTipo=new itemValor(entor->este,"--");
            valor->valor=tempTipo->valor;
        }else{
            objetoClase *nuevoObjto=new objetoClase(elemClase,tabla);
            tempTipo=new itemValor(nuevoObjto,"--");
            valor->valor=tempTipo->valor;

        }

    }





    //cargando con arreglos temporales
    for (int j = 0; j < dimen.count(); ++j) {
        itemValor *tempVal2=new itemValor(1,"1");
        valor->dimensiones.append(tempVal2);
    }

    int posAbsoluta=entor->tamEntornoAbsoluto();
    itemEntorno *nuevoItem =new itemEntorno(tokId,tokTipo,valor,dimen,tabla, posAbsoluta,true);
    entor->insertarItem(nuevoItem);

}


itemRetorno* _DECLARAR_VARIABLE_SINVISIBI::ejecutar(elementoEntorno *entor){

    validandoDebug(entor,nLinea);

    tabla->comentarioLinea("Declarando variable",entor->nivel);
    itemRetorno* ret=new itemRetorno(0);



    _TIPO *nodoTipo;
    nodoTipo = (_TIPO*)hijos[0];

    _VAR_ARREGLO *nodoVar;
    nodoVar = (_VAR_ARREGLO*)hijos[1];

    itemValor *valor=new itemValor();

    token *tokId=nodoVar->getIdentificador();
    token *tokTipo=nodoTipo->getTipo();


    QString t1=tabla->getEtiqueta();
    QString direc="";
    QString asign="";

    int posAbsoluta=entor->tamEntornoAbsoluto();
    if(entor->nombre=="global1"){

        direc = t1 + " = H";
        asign="Heap["+t1+"] = ";

        tabla->linea(direc,entor->nivel, "Direc");
        tabla->incrementarHeap(entor);
    }else{
        direc = t1 + " = P + " + QString::number(posAbsoluta);
        asign="Stack["+t1+"] = ";
        tabla->linea(direc,entor->nivel, "Direc");
    }


    if(nivel == 1){
        _VAL *nodoVal=(_VAL*)hijos[2];
        valor=nodoVal->getValor(entor,nodoTipo->getTipo());
    }


    /*-------------------------
     * Parche para cargar el objeto
    */

    itemValor *it1=new itemValor();
    itemValor *it2=it1->convertirATipo(tokTipo);
    if(it2->isTypeObjeto()){
        //tengo que cargar en valor la clase con el objeto

        //buscando el objeto si existe
        elementoClase *tempClase=tabla->getClase(tokTipo);
        if(tempClase==NULL){
            tabla->tablaError->insertErrorSemantic("El objeto :"+tokTipo->valLower+" no existe", tokTipo);
            return ret;
        }

        //creamos el nuevo metodo
        objetoClase *objClase=new objetoClase(tempClase,tabla);
        itemValor *vale=new itemValor(objClase,"t");
        valor->valor=vale->valor;

    }


    QList<itemValor*> dimen=nodoVar->getDimensiones(entor);


    // --Los tengo que almacenar en string poool *uto





    bool esGlobal=false;
    if(entor->nombre=="global"){
        esGlobal=true;
    }



    //revisando si no es un arreglo
    if(dimen.count()>0){


        if(valor->isTypeChar())
        //arreglo de caracteres
        {
            cargarCadena(asign,tokId,tokTipo,dimen,valor, entor, esGlobal);
        }else{
            cargarArreglo(asign,tokId,tokTipo,dimen,valor, entor, esGlobal);
        }


        if(valor->dimensiones.count()==0){
            itemValor *t1=new itemValor(2,"1");
            valor->dimensiones.append(t1);
        }
        /*
        itemValor *t1=new itemValor(2,"1");
        valor->dimensiones.append(t1);
        */

        return ret;
    }

    if (valor->c3dV != ""){

        //tabla->linea2(valor->c3d,entor->nivel);

        tabla->linea2(valor->c3dF+":",entor->nivel);
        tabla->linea(asign+"0",entor->nivel,tokId->val);
        tabla->linea("goto "+valor->c3dS, entor->nivel);
        tabla->linea2(valor->c3dV+":",entor->nivel);
        tabla->linea(asign+"1",entor->nivel,tokId->val);
        tabla->linea2(valor->c3dS+":",entor->nivel);
    }else{
        tabla->linea(asign+valor->c3d,entor->nivel,tokId->val);
    }


    valor->c3dF="";
    valor->c3dV="";
    valor->c3dS="";
    valor->dimen=dimen.count();
    itemEntorno *nuevoItem =new itemEntorno(tokId,tokTipo,valor,dimen,tabla, posAbsoluta, esGlobal);
    entor->insertarItem(nuevoItem);


    //println("Variable insertada exitosamente");
    return ret;
}


void _DECLARAR_VARIABLE_SINVISIBI::cargarArreglo(QString asign,
                                                 token* tokId,
                                                 token*tipo,
                                                 QList<itemValor *> dimen,
                                                 itemValor *valor,
                                                 elementoEntorno*entor,
                                                 bool esGlobal){

    /*-------------------------
     * Asignando el tipo
    */
    valor->c3dF="";
    valor->c3dV="";
    valor->c3dS="";

    valor->valor->tipo=tipo->valLower;
    valor->dimen=dimen.count();
    int posAbsoluta=entor->tamEntornoAbsoluto();
    itemEntorno *nuevoItem =new itemEntorno(tokId,tipo,valor,dimen,tabla, posAbsoluta, esGlobal);
    entor->insertarItem(nuevoItem);

    //asignando la posición libre del heap a stack
    tabla->linea(asign+"H",entor->nivel,tokId->val);
    /*-------------------------
     * Mapeo
    */
    tabla->comentarioLinea("Size of array",entor->nivel);
    QString anterior="1";
    for (int i = 0; i < dimen.count(); ++i) {
       itemValor *elem =dimen[i];

       tabla->linea("Heap[H] = "+elem->c3d,entor->nivel);
       QString etqDim=tabla->getEtiqueta();
       tabla->linea(etqDim+" = Heap[H]",entor->nivel);
       QString result=tabla->getEtiqueta();
       tabla->linea(result+" = "+anterior+" * "+etqDim,entor->nivel);
       tabla->incrementarHeap(entor);
       anterior=result;
    }

    tabla->linea("Heap[0] = H",entor->nivel,"aux donde inicia arreglo");
    tabla->comentarioLinea("Colocando parametros", entor->nivel);
    tabla->func_colocarParam(anterior,1,entor);
    tabla->func_llamarFunc("func_iniciarArreglo",entor);



    /*-------------------------
     * Inicialiar Arreglo
    */
    if(valor->dimensiones.count()!=0)
    //viene una lista de valores
    {
        tabla->comentarioLinea("Asignano valores a los arreglos", entor->nivel);
        for (int i = 0; i < valor->dimensiones.count(); ++i) {
            itemValor *item=valor->dimensiones[i];
            QString etqT1=tabla->getEtiqueta();
            tabla->linea(etqT1+" = Heap[0]",entor->nivel);
            QString etqT2=tabla->getEtiqueta();
            tabla->linea(etqT2+" = "+etqT1+" + "+QString::number(i), entor->nivel);
            tabla->linea("Heap["+etqT2+"] = "+item->c3d,entor->nivel);
        }
    }

}



void _DECLARAR_VARIABLE_SINVISIBI::cargarCadena(QString asign,
                                                 token* tokId,
                                                 token*tipo,
                                                 QList<itemValor *> dimen,
                                                 itemValor *valor,
                                                 elementoEntorno*entor,
                                                 bool esGlobal){



    /*-------------------------
     * Asignando el tipo
    */
    valor->c3dF="";
    valor->c3dV="";
    valor->c3dS="";

    valor->valor->tipo=tipo->valLower;
    valor->dimen=dimen.count();
    int posAbsoluta=entor->tamEntornoAbsoluto();
    itemEntorno *nuevoItem =new itemEntorno(tokId,tipo,valor,dimen,tabla, posAbsoluta, esGlobal);
    entor->insertarItem(nuevoItem);

    //asignando la posición libre del heap a stack
    tabla->linea(asign+"H",entor->nivel,tokId->val);
    //puntero donde inicia el arreglo
    tabla->linea("Heap[0] = H",entor->nivel,"aux donde inicia arreglo");

    /*-------------------------
     * Mapeo
    */
    tabla->comentarioLinea("Size of array",entor->nivel);
    QString anterior="1";
    for (int i = 0; i < dimen.count(); ++i) {
       itemValor *elem =dimen[i];

       tabla->linea("Heap[H] = "+elem->c3d,entor->nivel);
       QString etqDim=tabla->getEtiqueta();
       tabla->linea(etqDim+" = Heap[H]",entor->nivel);
       QString result=tabla->getEtiqueta();
       tabla->linea(result+" = "+anterior+" * "+etqDim,entor->nivel);
       tabla->incrementarHeap(entor);
       anterior=result;
    }

    /*-------------------------
     * Inicialiar Arreglo
    */
    tabla->comentarioLinea("Colocando parametros", entor->nivel);
    tabla->func_colocarParam(anterior,1,entor);
    tabla->func_llamarFunc("func_iniciarArreglo",entor);



    /*-------------------------
     * LLenando con caracteres
    */

    tabla->comentarioLinea("Asignando valores a los arreglos", entor->nivel);
    tabla->func_colocarParam("Heap[0]",1, entor);
    tabla->func_colocarParam(valor->c3d,2,entor);
    tabla->func_llamarFunc("func_cargarCadena",entor);




}
