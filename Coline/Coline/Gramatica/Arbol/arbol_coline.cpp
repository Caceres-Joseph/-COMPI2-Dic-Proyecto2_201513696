#include "arbol_coline.h"


void arbol_coline::cargarHeredados(){


    for (int i = 0; i < tabla->lstClases.count(); ++i) {
        elementoClase *temp=tabla->lstClases[i];

        if(temp->extender->valLower!=""){
            elementoClase *padre = tabla->getClase(temp->extender);

            if(padre==NULL)return;
            temp->heredar(padre);
        }
    }
}


void arbol_coline::ejecutarPrincipal(){


    //recorro todas las clases en busca del main


    for (int i = 0; i < tabla->lstClases.count(); ++i) {
        elementoClase *temp=tabla->lstClases[i];

        //verificar si hereda de alguna clase
        if(temp->lstPrincipal->listaPolimorfa.count()!=0){

            //elementoPolimorfo prin=temp->lstPrincipal->listaPolimorfa[0];

            objetoClase *objClase=new objetoClase(temp,tabla);
            objClase->ejecutarGlobales(objClase->este);
            objClase->ejecutarPrincipal();
            objClase->ejecutarConstructores(temp->nombreClase->valLower);
            objClase->ejecutarMetodos(temp->nombreClase->valLower);

        }
    }

}



void arbol_coline::ejecutarDemasMetodos(){


    //recorro todas las clases en busca del main


    for (int i = 0; i < tabla->lstClases.count(); ++i) {
        elementoClase *temp=tabla->lstClases[i];
        if(temp->lstPrincipal->listaPolimorfa.count()==0){


            //elementoPolimorfo prin=temp->lstPrincipal->listaPolimorfa[0];
            objetoClase *objClase=new objetoClase(temp,tabla);
            objClase->ejecutarConstructores(temp->nombreClase->valLower);
            objClase->ejecutarMetodos(temp->nombreClase->valLower);

        }
    }

}



QString arbol_coline::getSalida(){
    //return tabla->salida;
    return "";
}


void arbol_coline::println(QString mensaje){

    std::cout<<"[arbol_coline]"<<mensaje.toStdString()<<std::endl;
}
