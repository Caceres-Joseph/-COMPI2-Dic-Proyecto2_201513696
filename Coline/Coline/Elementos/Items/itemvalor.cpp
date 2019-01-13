#include "itemvalor.h"

bool itemValor::isTypeChar(){
    if(valor->tipo=="caracter"){
        return true;
    }
    return false;
}

bool itemValor::isTypeCadena(){
    if(valor->tipo=="cadena"){
        return true;
    }
    return false;
}

bool itemValor::isTypeBooleano(){
    if(valor->tipo=="booleano"){
        return true;
    }
    return false;

}

bool itemValor::isTypeEntero(){
    if(valor->tipo=="entero"){
        return true;
    }
    return false;

}

bool itemValor::isTypeDecimal(){
    if(valor->tipo=="decimal"){
        return true;
    }
    return false;

}

bool itemValor::isTypeNulo(){
    if(valor->tipo=="nulo"){
        return true;
    }
    return false;

}
bool itemValor::isTypeObjeto(){
    if(valor->tipo=="objeto"){
        return true;
    }
    return false;
}
bool itemValor::isTypeVacio(){
    return false;
}

