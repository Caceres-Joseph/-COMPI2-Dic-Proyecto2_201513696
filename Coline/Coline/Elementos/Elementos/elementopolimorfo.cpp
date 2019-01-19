#include "elementopolimorfo.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Elementos/Objetos/objetoclase.h"
elementoPolimorfo::elementoPolimorfo(token *visibilidad, tablaSimbolos *tabla, token *tipo, token *nombre, nodoModelo *LST_CUERPO, int dimension, QString nombreClase)
{
    this->dimension=dimension;
    this->tabla=tabla;
    this->tipo=tipo;
    this->nombre=nombre;

    this->LST_CUERPO=LST_CUERPO;
    this->visibilidad=visibilidad;
    this->nombreClase=nombreClase;
}

void elementoPolimorfo::insertarParametro(token *idParametro, token *tipoParametro, int dimension){
    elementoParametro *param=new elementoParametro(tipoParametro,dimension);

    for (int i = 0; i < lstParametros.count(); ++i) {
        elementoParametro * elem= lstParametros[i];
        QString nombre=lstNombres[i];
        if(nombre==idParametro->valLower){
            tabla->tablaError->insertErrorSemantic("Ya existe un parametro con el nombre: "+idParametro->val,idParametro);
            return;
        }
    }

    lstParametros.append(param);
    lstNombres.append(idParametro->valLower);


}

void elementoPolimorfo::ejecutar(elementoEntorno *entor, QString nameClass){


    elementoEntorno *metodo=new elementoEntorno(entor,tabla,nombre->valLower,entor->este);
    metodo->nivel++;
    /* +-------------
     * | Cargando parámetros
    */
    cargarParametros(metodo);
    /* +-------------
     * | Etiqueta de salida
    */
    tabla->Salida3d=tabla->getSalto();


    tabla->linea2("",entor->nivel);
    tabla->linea2("void "+nameClass+"_"+nombre->valLower+cadParams()+"(){",entor->nivel);
    LST_CUERPO->ejecutarHijos(metodo);
    //imprimirNodos();
    tabla->linea2(tabla->Salida3d+":",entor->nivel);
    tabla->Salida3d="";


    tabla->limpiarAmbito(metodo);
    tabla->linea2("}", entor->nivel);
}

void elementoPolimorfo::cargarParametros(elementoEntorno *entor){


    for (int i = 0; i < lstParametros.count(); ++i) {
        elementoParametro * value= lstParametros[i];
        QString key=lstNombres[i];

        int posAbsoluta=entor->tamEntornoAbsoluto();
        QList<itemValor*> lista;
        lista.append(new itemValor());


        itemValor *tempVal= getValor(value->tipo->valLower);

        //cargando con arreglos temporales
        for (int j = 0; j < value->dimensiones; ++j) {
            itemValor *tempVal2=new itemValor(1,"1");
            tempVal->dimensiones.append(tempVal2);
        }


        //validando si es de tipo objeto para cargar el objeto en valor
        itemValor *tempTipo=new itemValor();
        itemValor *tipoRes=tempTipo->convertirATipo(value->tipo);

        if(tipoRes->isTypeObjeto()){
            //es de tipo objeto, hay que buscar la clase para cargarla en el valor
            elementoClase* elemClase= tabla->getClase(value->tipo);

            objetoClase *nuevoObjto=new objetoClase(elemClase,tabla);
            tempTipo=new itemValor(nuevoObjto,"--");
            tempVal->valor=tempTipo->valor;
        }


        tempVal->dimen=value->dimensiones;
        itemEntorno *nuevoItem =new itemEntorno(new token(key),value->tipo,tempVal,lista,tabla, posAbsoluta, false);
        entor->insertarItem(nuevoItem);
    }

}

QString elementoPolimorfo::cadParams(){
    QString retorno="";

    for (int i = 0; i < lstParametros.count(); ++i) {
        elementoParametro * value= lstParametros[i];

        itemValor *t1=new itemValor();
        itemValor *t2=t1->convertirATipo(value->tipo);


        QString tipo="";
        if(t2->isTypeObjeto() || t2->isTypeNulo()){

            tipo="objeto";
        }else{
            tipo=value->tipo->valLower;
        }


        retorno+="_"+tipo+QString::number(value->dimensiones);

    }

    return retorno;
}

itemValor *elementoPolimorfo::getValor(QString tipo){
    itemValor *retorno=new itemValor();
    if(tipo=="entero"){
        retorno=new itemValor(1,"1");
        return retorno;
    }else if(tipo =="decimal"){
        retorno=new itemValor(1.1,"1.1");
        return retorno;

    }else if(tipo =="caracter"){
        retorno=new itemValor('a',"1");
        return retorno;

    }else if(tipo =="cadena"){
        retorno=new itemValor("cadena","0");
        return retorno;

    }else if(tipo =="booleano"){
        retorno=new itemValor(false,"0");
        return retorno;

    }else{
        //es de tipo objeto
        return retorno;
    }


}

bool elementoPolimorfo::comprobarParams(QList<itemValor *> params, token *nombre){

    if(params.count()!= lstParametros.count()){
        return false;
    }

    for (int i = 0; i < lstParametros.count(); ++i) {
        elementoParametro * value= lstParametros[i];
        itemValor* val=params[i];

        QString tipo="";
        itemValor *t3=new itemValor();
        itemValor *t4=t3->convertirATipo(new token(val->valor->tipo));
        if(t4->isTypeObjeto()||t4->isTypeNulo()){
            tipo="objeto";
        }else{
            tipo=val->valor->tipo;
        }

        QString tipo2="";
        itemValor *t1=new itemValor();
        itemValor *t2=t1->convertirATipo(value->tipo);
        tipo2=t2->valor->tipo;

        if(!((tipo==tipo2)&&(val->dimen==value->dimensiones))){
            return false;
        }
    }

    return true;
}
