#include "lstpolimorfismo.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

lstPolimorfismo::lstPolimorfismo(tablaSimbolos *tabla, QString nombre)
{
    this->tabla=tabla;
    this->nombre=nombre;
}


void lstPolimorfismo::ejecutar(elementoEntorno *entorno){


    for (int i = 0; i < listaPolimorfa.count(); ++i) {
        elementoPolimorfo *temp=listaPolimorfa[i];
        temp->LST_CUERPO->ejecutar(entorno);
    }
}

void lstPolimorfismo::ejecutarMetodo(elementoEntorno *entorno){


    for (int i = 0; i < listaPolimorfa.count(); ++i) {
        elementoPolimorfo *temp=listaPolimorfa[i];
        temp->ejecutar(entorno);
    }
}

itemValor *lstPolimorfismo::getMetodo(token* nombre, QList<itemValor *> params){

    for (int i = 0; i < listaPolimorfa.count(); ++i) {
        elementoPolimorfo* elemen=listaPolimorfa[i];

        if(elemen->nombre->valLower==nombre->valLower){
            //ahora se comparan los parametros
            if(elemen->comprobarParams(params, nombre)){
                if(elemen->tipo->valLower=="vacio"){
                    itemValor *vale=new itemValor();
                    return vale;
                }else{
                    itemValor *ret=new itemValor(1,"1");
                    ret->valor->tipo=elemen->tipo->valLower;
                    return ret;
                }
            }
        }
    }

    //no se encontró la función
    tabla->tablaError->insertErrorSemantic(
                "No se econtro el metodo:"+nombre->val+" con parametros: "+cadParams(params),
                nombre);

    return new itemValor();
}

QString lstPolimorfismo::cadParams(QList<itemValor *> params){
    QString retorno="";
    for (int i = 0; i < params.count(); ++i) {
        itemValor *elem=params[i];
        retorno+="_"+elem->valor->tipo+QString::number(elem->dimensiones.count());
    }
    return retorno;
}
