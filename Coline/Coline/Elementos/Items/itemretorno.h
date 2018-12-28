#ifndef ITEMRETORNO_H
#define ITEMRETORNO_H


/*
|--------------------------------------------------------------------------
| IMPORTACIONES
|--------------------------------------------------------------------------
*/
#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Items/itemvalor.h"
/*
|--------------------------------------------------------------------------
| CLASE
|--------------------------------------------------------------------------
*/
/*
|--------------------------------------------------------------------------
| itemRetorno
|--------------------------------------------------------------------------
| 0 = normal
| 1 = return;
| 2 = break
| 3 = continue
| 4 = errores
*/
class itemRetorno
{
public:
    int tipoRetorno=0;
    itemValor *valor=new itemValor();

    /*
    |----------------
    | CONSTRUCTORES
    |----------------
    */
    itemRetorno(int tipoRetorno){
        this->tipoRetorno=tipoRetorno;
    }

    itemRetorno(itemValor *valor){
        this->valor=valor;
        this->tipoRetorno=1;
    }

    /*
    |----------------
    | VALIDANDO TIPOS
    |----------------
    */

    bool isNormal(){
        if (tipoRetorno == 0)
            return true;
        else
            return false;
    }

    bool isRetorno(){
        if (tipoRetorno == 1)
            return true;
        else
            return false;
    }

    bool isRomper(){
        if (tipoRetorno == 2)
            return true;
        else
            return false;
    }

    bool isContinuar(){
        if (tipoRetorno == 3)
            return true;
        else
            return false;
    }


};

#endif // ITEMRETORNO_H
