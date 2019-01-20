#include "_romper.h"


itemRetorno* _ROMPER::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("Detener",entor->nivel);
    itemRetorno* ret=new itemRetorno(0);

    if(tabla->saltoFalso!=""){
        tabla->linea("goto "+tabla->saltoFalso,entor->nivel);
        tabla->saltoFalso="";
    }



    return ret;
}
