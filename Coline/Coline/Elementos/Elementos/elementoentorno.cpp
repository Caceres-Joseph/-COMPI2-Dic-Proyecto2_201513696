#include "elementoentorno.h"

elementoEntorno::elementoEntorno(elementoEntorno *anterior, tablaSimbolos *tabla, QString nombre, objetoClase *este)
{
    this->anterior=anterior;
    this->tabla=tabla;
    this->nombre=nombre;
    this->este=este;
}


void elementoEntorno::insertarItem(itemEntorno *nuevoEntorno)
{

    /*
    std::map<QString,itemEntorno*>::iterator it =lstEntorno.find(nuevoEntorno->nombre->valLower);
    if(it!=lstEntorno.end()){
        //ya hay una variable con el mismo nombre *uto
        tabla->tablaError->insertErrorSemantic("Ya existe una variable en el mismo ambito con el nombre: "+nuevoEntorno->nombre->val,nuevoEntorno->nombre);
    }else{
    }*/

    for (int i = 0; i < lstEntorno.count(); ++i) {
        itemEntorno *elem=lstEntorno[i];

        if(nuevoEntorno->nombre->valLower==elem->nombre->valLower){
            tabla->tablaError->insertErrorSemantic("Ya existe una variable en el mismo ambito con el nombre: "+nuevoEntorno->nombre->val,nuevoEntorno->nombre);
            return;
        }
    }

    //se puede insertar libremente
    lstEntorno.append(nuevoEntorno);

}


itemEntorno *elementoEntorno::getValId(token *idVal){
    QList<itemValor*> list;
    itemEntorno *retorno=new itemEntorno(new token(),new token(),new itemValor(),list,tabla,0,false);

    for (int i = 0; i < this->lstEntorno.count(); ++i) {
       itemEntorno *elem=lstEntorno[i];
       if(elem->nombre->valLower==idVal->valLower){
            return elem;
       }
    }

    while (this->anterior!=NULL){
        return this->anterior->getValId(idVal);
    }



    tabla->tablaError->insertErrorSemantic("La variable: "+idVal->val+" no se enecuentra en el ambito actual",idVal);

    return retorno;
}

int elementoEntorno::tamEntornoAbsoluto()
{
    int cantidad= lstEntorno.count();
    if(nombre=="global"){
        return cantidad;
    }else{
        //le resto uno , pero no se poque :/
        //ya no le voy a restar uno,jejeje
        return posVar2(0);
    }
}

int elementoEntorno::posVar2(int num){

    int cantidad=num+lstEntorno.count();
    if(nombre=="global"){
        return num+1;
    }
    while(this->anterior!=NULL){
        return this->anterior->posVar2(cantidad);
    }
    return cantidad;

}
