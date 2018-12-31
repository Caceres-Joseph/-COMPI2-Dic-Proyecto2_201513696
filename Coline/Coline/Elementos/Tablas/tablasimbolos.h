#ifndef TABLASIMBOLOS_H
#define TABLASIMBOLOS_H

/*
|--------------------------------------------------------------------------
| IMPORTACIONES
|--------------------------------------------------------------------------
*/
#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablaerrores.h"
//#include "Coline/Elementos/Elementos/elementoclase.h"
class elementoClase;
/*
|--------------------------------------------------------------------------
| CLASE
|--------------------------------------------------------------------------
*/
class tablaSimbolos
{
public:
    QString salida="";
    tablaErrores *tablaError=new tablaErrores();

    QList<elementoClase*> lstClases;

    tablaSimbolos(){

    }
};

#endif // TABLASIMBOLOS_H
