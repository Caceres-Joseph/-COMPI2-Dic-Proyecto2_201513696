#include "_clase.h"



void _CLASE::ejecutar(){
    token *nombreClase=getNombre();
    token *extender=getExtender();
    token *visibilidad=getVisibilidad();


    elementoClase *nuevaClase=new elementoClase(nombreClase,visibilidad,extender,hijos,tabla);
    //imprimirNodos();
    ejecutarHijos2(nuevaClase);
    tabla->lstClases.append(nuevaClase);


}
