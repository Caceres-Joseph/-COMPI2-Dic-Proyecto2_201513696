#include "_cuerpo.h"



itemRetorno* _CUERPO::ejecutar(elementoEntorno *entor){


    validandoDebug(entor,nLinea);

    return ejecutarHijos(entor);

}
