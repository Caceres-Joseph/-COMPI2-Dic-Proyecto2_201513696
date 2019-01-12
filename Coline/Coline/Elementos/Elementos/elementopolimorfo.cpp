#include "elementopolimorfo.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
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

    std::map<QString,elementoParametro*>::iterator it =lstParametros.find(idParametro->valLower);
    if(it!=lstParametros.end()){
        //ya hay una variable con el mismo nombre *uto
        tabla->tablaError->insertErrorSemantic("Ya existe un parametro con el nombre: "+idParametro->val,idParametro);
    }else{
        //se puede insertar libremente
        lstParametros.insert(std::pair<QString, elementoParametro*>(idParametro->valLower,param));
    }
}

void elementoPolimorfo::ejecutar(elementoEntorno *entor){


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
    tabla->linea2("void "+nombreClase+"_"+nombre->valLower+cadParams()+"(){",entor->nivel);
    LST_CUERPO->ejecutarHijos(metodo);
    //imprimirNodos();
    tabla->linea2(tabla->Salida3d+":",entor->nivel);
    tabla->Salida3d="";


    tabla->limpiarAmbito(metodo);
    tabla->linea2("}", entor->nivel);
}

void elementoPolimorfo::cargarParametros(elementoEntorno *entor){

    std::map<QString, elementoParametro*>::iterator it = lstParametros.begin();

    int pos=1;
    while (it != lstParametros.end())
    {
        QString key = it->first;
        elementoParametro* value = it->second;

        int posAbsoluta=entor->tamEntornoAbsoluto();
        QList<itemValor*> lista;
        lista.append(new itemValor());
        itemEntorno *nuevoItem =new itemEntorno(new token(key),value->tipo,getValor(value->tipo->valLower),lista,tabla, posAbsoluta, false);



        entor->insertarItem(nuevoItem);

        // Increment the Iterator to point to next entry
        it++;
    }
}

QString elementoPolimorfo::cadParams(){
    QString retorno="";
    std::map<QString, elementoParametro*>::iterator it = lstParametros.begin();
    while (it != lstParametros.end())
    {
        elementoParametro* value = it->second;
        retorno+="_"+value->tipo->valLower+QString::number(value->dimensiones);
        it++;
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

    if(params.count()!=lstParametros.size()){
        return false;
    }

    std::map<QString, elementoParametro*>::iterator it = lstParametros.begin();
    int i=0;
    while (it != lstParametros.end())
    {
        elementoParametro* value = it->second;
        itemValor* val=params[i];

        if(!((val->valor->tipo==value->tipo->valLower)&&(val->dimen==value->dimensiones))){
            return false;
        }
        it++;
        i++;
    }

    return true;
}
