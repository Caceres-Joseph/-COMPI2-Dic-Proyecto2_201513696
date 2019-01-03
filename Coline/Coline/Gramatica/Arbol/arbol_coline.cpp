#include "arbol_coline.h"


void arbol_coline::ejecutarPrincipal(){


    //recorro todas las clases en busca del main


    for (int i = 0; i < tabla->lstClases.count(); ++i) {
        elementoClase *temp=tabla->lstClases[i];
        if(temp->lstPrincipal->listaPolimorfa.count()!=0){


            //elementoPolimorfo prin=temp->lstPrincipal->listaPolimorfa[0];

            objetoClase *objClase=new objetoClase(temp,tabla);
            objClase->ejecutarGlobales();
            objClase->ejecutarPrincipal();


        }
    }

}



QString arbol_coline::getSalida(){
    return tabla->salida;
}
