#include "_concatenar.h"


itemRetorno* _CONCATENAR::ejecutar(elementoEntorno *entor){
    itemRetorno* ret=new itemRetorno(0);

    _LST_VAL *nodoVals=(_LST_VAL*)hijos[0];
    QList<itemValor*> lstValores=nodoVals->getLstValores(entor);

    /*-------------------------
     * Validando errores
    */
    if(lstValores.count()!=2){
        tabla->tablaError->insertErrorSemantic("Para concatenar son dos parametros",lst_Atributos->getToken(0));
        return ret;
    }
    itemValor *destino=lstValores[0];
    itemValor *valor=lstValores[1];
    if(!(destino->isTypeChar()&&valor->isTypeChar())){
        tabla->tablaError->insertErrorSemantic("Para concatenar tiene que ser tipo char",lst_Atributos->getToken(0));
        return ret;
    }

    if(destino->dimen!=1){
        tabla->tablaError->insertErrorSemantic("El destino tiene que ser un array de caracteres", lst_Atributos->getToken(0));
        return ret;
    }


    /*-------------------------
     * Cargando parametros
    */
    tabla->func_colocarParam(destino->c3d,1,entor);
    tabla->func_colocarParam(valor->c3d,2,entor);


    /*-------------------------
     * Llamando a la funcion
    */
    if(valor->dimen==0){
        tabla->func_llamarFunc("func_concatenarArrayString",entor);
    }else{
        tabla->func_llamarFunc("func_concatenarArrayArray",entor);
    }

    return ret;
}
