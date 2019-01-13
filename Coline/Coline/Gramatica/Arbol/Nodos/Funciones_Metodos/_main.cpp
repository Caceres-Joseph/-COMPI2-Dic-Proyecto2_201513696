#include "_main.h"

_MAIN::_MAIN(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla){
}


void _MAIN::ejecutarHijos2(elementoClase *simbolo){
    token *visibilidad=new token("publico");
    token *tipo=new token("vacio");
    token *nombre2=lst_Atributos->getToken(0);

    elementoPolimorfo *eleme=new elementoPolimorfo(visibilidad,tabla,tipo,nombre2,this,0, simbolo->nombreClase->valLower);

    simbolo->lstPrincipal->listaPolimorfa.append(eleme);
}

/*
 *
*/

itemRetorno* _MAIN::ejecutar(elementoEntorno *entor){
    itemRetorno* ret=new itemRetorno(0);

    tabla->Salida3d=tabla->getSalto();

    elementoEntorno *principal=new elementoEntorno(entor,tabla,"principal",entor->este);
    principal->nivel++;
    tabla->linea2("",entor->nivel);
    tabla->linea("principal()",0);
    tabla->linea2("void principal(){",entor->nivel);
    ejecutarHijos(principal);
    //imprimirNodos();
    tabla->linea2(tabla->Salida3d+":",entor->nivel);
    tabla->Salida3d="";
    tabla->linea2("}", 0);


    return ret;
}
