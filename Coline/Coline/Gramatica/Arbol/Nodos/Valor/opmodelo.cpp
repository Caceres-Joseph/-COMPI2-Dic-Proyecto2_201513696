#include "opmodelo.h"

opModelo::opModelo(nodoModelo *hijo1, nodoModelo *hijo2, tablaSimbolos *tabla, token *signo){
    this->hijo1=(_E*)hijo1;
    this->hijo2=(_E*)hijo2;
    this->tabla=tabla;
    this->signo=signo;
}

opModelo::opModelo(nodoModelo *hijo1, tablaSimbolos *tabla, token *signo){
    this->hijo1=(_E*)hijo1;
    this->tabla=tabla;
    this->signo=signo;
}
