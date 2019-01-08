#include "_sino.h"


itemRetorno* _SINO::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("sino", entor->nivel);
    itemRetorno* ret=new itemRetorno(0);


    /*
     * CREANDO UN NUEVO ENTORNO
    */

    elementoEntorno *entornoSi=new elementoEntorno(entor,tabla,"sino",entor->este);
    entornoSi->nivel=entor->nivel+1;

    hijos[0]->ejecutarHijos(entornoSi);

    return ret;
}

