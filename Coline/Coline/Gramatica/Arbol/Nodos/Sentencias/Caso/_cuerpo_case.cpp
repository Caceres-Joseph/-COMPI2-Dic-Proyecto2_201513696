#include "_cuerpo_case.h"





void _CUERPO_CASE::execute(itemValor *valor, elementoEntorno *entor, QString etqSalida){

    if(nivel==1){

        tabla->saltoFalso=etqSalida;
        tabla->comentarioLinea("Evaluando caso",entor->nivel);
        _E *nodoE =(_E*)hijos[0];
        itemValor *valE=nodoE->getValorT(entor);

        QString saltoVerdad=tabla->getSalto();
        //QString saltoFalso=tabla->getSalto();
        QString saltoSalida=tabla->getSalto();

        tabla->linea("if("+valor->c3d+" == "+valE->c3d+")goto "+saltoVerdad, entor->nivel);
        tabla->linea("goto "+saltoSalida, entor->nivel);
        tabla->linea2(saltoVerdad+":",entor->nivel);

        hijos[1]->ejecutar(entor);
        tabla->linea2(saltoSalida+":",entor->nivel);

        _CUERPO_CASE *nodoCase=(_CUERPO_CASE*)hijos[2];
        nodoCase->execute(valor,entor,etqSalida);

    }else if(nivel==2){

        tabla->saltoFalso=etqSalida;
        tabla->comentarioLinea("Evaluando caso",entor->nivel);
        _E *nodoE =(_E*)hijos[0];
        itemValor *valE=nodoE->getValorT(entor);

        QString saltoVerdad=tabla->getSalto();
        //QString saltoFalso=tabla->getSalto();
        QString saltoSalida=tabla->getSalto();

        tabla->linea("if("+valor->c3d+" == "+valE->c3d+")goto "+saltoVerdad, entor->nivel);
        tabla->linea("goto "+saltoSalida, entor->nivel);
        tabla->linea2(saltoVerdad+":",entor->nivel);

        hijos[1]->ejecutar(entor);

        tabla->linea2(saltoSalida+":",entor->nivel);
    }else if(nivel==3) {

        tabla->comentarioLinea("Valor por defecto",entor->nivel);
        hijos[0]->ejecutar(entor);
    }

}
