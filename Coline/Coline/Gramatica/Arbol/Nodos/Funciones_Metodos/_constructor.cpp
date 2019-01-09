#include "_constructor.h"

void _CONSTRUCTOR::ejecutarHijos2(elementoClase *simbolo){
    token *visibilidad=new token("publico");
    token *tipo=new token("vacio");
    token *nombre2=lst_Atributos->getToken(0);

    elementoPolimorfo *eleme=new elementoPolimorfo(visibilidad,tabla,tipo,nombre2,hijos[1],0, simbolo->nombreClase->valLower);

    cargarPolimorfismoHijos(eleme);
    simbolo->lstConstructores->listaPolimorfa.append(eleme);
}
