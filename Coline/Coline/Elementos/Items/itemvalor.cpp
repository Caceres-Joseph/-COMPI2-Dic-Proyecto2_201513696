#include "itemvalor.h"
#include "Coline/Elementos/Objetos/objetoclase.h"
itemValor* itemValor::convertirATipo(token *tipo){
    if(tipo->valLower=="caracter"){
        return new itemValor('a',"a");
    }else if(tipo->valLower=="booleano"){
        return new itemValor(false, "1");
    }else if(tipo->valLower=="entero"){
        return new itemValor(2,"1");
    }else if(tipo->valLower=="decimal"){
        return new itemValor(2.4,"1");
    }
    //para manejar el nulo como objeto
    /*else if(tipo->valLower=="nulo"){
        return new itemValor();
    }
    */
    else{
        itemValor *vale=new itemValor();
        vale->valor->tipo="objeto";
        vale->c3d="0";

        return vale;
    }
}


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

