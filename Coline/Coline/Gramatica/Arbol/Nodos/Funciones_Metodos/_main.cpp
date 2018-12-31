#include "_main.h"

_MAIN::_MAIN(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla){
}


void _MAIN::ejecutarHijos2(elementoClase *simbolo){
    token *visibilidad=new token("publico");
    token *tipo=new token("vacio");
    token *nombre2=lst_Atributos->getToken(0);

    elementoPolimorfo *eleme=new elementoPolimorfo(visibilidad,tabla,tipo,nombre2,hijos[0],0);

    simbolo->lstPrincipal->listaPolimorfa.append(eleme);
}
