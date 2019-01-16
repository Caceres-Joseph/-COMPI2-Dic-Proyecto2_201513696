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


itemEntorno *elementoEntorno::getValIdGlobal(token *idVal){
    QList<itemValor*> list;

    itemEntorno *retorno=new itemEntorno(new token(),new token(),new itemValor(),list,tabla,0,false);

    if(nombre=="global"){
        return getValId(idVal);
    }else{
        if(anterior!=NULL){
            return anterior->getValIdGlobal(idVal);
        }
    }

    tabla->tablaError->insertErrorSemantic("La variable: "+idVal->val+" no se enecuentra en el ambito global",idVal);
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
        return num+2;
    }
    while(this->anterior!=NULL){
        return this->anterior->posVar2(cantidad);
    }
    return cantidad;

}


int elementoEntorno::cargarTablaColine(QTableWidget *tablaSimb, int indice){


    if(anterior!=NULL){
        indice = anterior->cargarTablaColine(tablaSimb,indice);
    }

    for (int i = 0; i < lstEntorno.count(); ++i) {
        itemEntorno* elem=lstEntorno[i];

        tablaSimb->setRowCount(indice+1);

        /*
        QTableWidgetItem *tab0=new QTableWidgetItem(QString::number(indice));
        tablaSimb->setItem(indice,0,tab0);
*/

        QTableWidgetItem *tab1=new QTableWidgetItem(elem->nombre->val);
        tablaSimb->setItem(indice,0,tab1);


        QTableWidgetItem *tab2=new QTableWidgetItem(elem->tipo->valLower);
        tablaSimb->setItem(indice,1,tab2);


        QTableWidgetItem *tab7=new QTableWidgetItem(elem->valor->valor->tipo);
        tablaSimb->setItem(indice,2,tab7);


        QTableWidgetItem *tab3=new QTableWidgetItem(QString::number(elem->valor->dimen));
        tablaSimb->setItem(indice,3,tab3);


        QTableWidgetItem *tab4=new QTableWidgetItem(QString::number(elem->pos));
        tablaSimb->setItem(indice,4,tab4);


        QTableWidgetItem *tab5=new QTableWidgetItem(QString::number(elem->esGlobal));
        tablaSimb->setItem(indice,5,tab5);


        QTableWidgetItem *tab6=new QTableWidgetItem(nombre);
        tablaSimb->setItem(indice,6,tab6);





        indice=indice+1;
    }

    return indice;


}
