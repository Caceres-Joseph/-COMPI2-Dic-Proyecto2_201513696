#include "elementoclase.h"

void elementoClase::heredar(elementoClase *padre){
    lstVariablesGlobales->concatenarHeredados(padre->lstVariablesGlobales->listaPolimorfa);
    lstMetodo_funcion->concatenarHeredados(padre->lstMetodo_funcion->listaPolimorfa);

}




void elementoClase::println(QString mensaje){
    std::cout<<"[elementoClase]"<<mensaje.toStdString()<<std::endl;
}
