#include "lstpolimorfismo.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Elementos/Objetos/objetoclase.h"
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


        QString tipo="";

        itemValor *t3=new itemValor();
        itemValor *t4=t3->convertirATipo(new token(elem->valor->tipo));

        if(t4->isTypeObjeto()||t4->isTypeNulo()){
            //p_objeto *pObj=(p_objeto*)val->valor;
            //tipo=pObj->valor->cuerpoClase->nombreClase->valLower;
            tipo="objeto";
        }else{
            tipo=elem->valor->tipo;
        }




        retorno+="_"+tipo+QString::number(elem->dimen);
    }
    return retorno;
}
