#include "_continuar.h"


itemRetorno* _CONTINUAR::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("Detener",entor->nivel);
    itemRetorno* ret=new itemRetorno(0);

    if(tabla->saltoInicio!=""){
        tabla->linea("goto "+tabla->saltoInicio,entor->nivel);
    }
    tabla->saltoInicio="";

    return ret;
}
