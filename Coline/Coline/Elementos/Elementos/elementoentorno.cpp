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
    QList<int> list;
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

int elementoEntorno::posVar()
{

}

int elementoEntorno::posVar2(int num){

}
