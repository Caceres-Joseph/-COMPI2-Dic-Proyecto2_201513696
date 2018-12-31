#ifndef ELEMENTOCLASE_H
#define ELEMENTOCLASE_H



#include "Coline/Elementos/Global/importar.h"
//#include "Coline/Elementos/Global/nodosimport.h"
#include "Coline/Elementos/Global/token.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
#include "Coline/Elementos/Listas/lstpolimorfismo.h"
//#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
class nodoModelo;

class elementoClase
{
public:

    lstPolimorfismo* lstPrincipal;
    lstPolimorfismo* lstMetodo_funcion;
    lstPolimorfismo* lstConstructores;
    lstPolimorfismo* lstConstructoresHeredados;

    token *nombreClase;
    token *visibilidad;
    token *extender;

    QList<nodoModelo*> lstHijos;
    tablaSimbolos *tabla;




    elementoClase(token *nombre, token *visibilidad, token *extender, QList<nodoModelo*> lstHijos, tablaSimbolos *tabla){
        this->tabla=tabla;
        this->lstHijos=lstHijos;
        this->nombreClase=nombre;
        this->visibilidad=visibilidad;
        this->extender=extender;


        this->lstPrincipal=new lstPolimorfismo(tabla,"principales");
        this->lstMetodo_funcion=new lstPolimorfismo(tabla,"metodos_funciones");
        this->lstConstructores=new lstPolimorfismo(tabla,"constructores");
        this->lstConstructoresHeredados=new lstPolimorfismo(tabla,"constructores_heredados");

    }


};

#endif // ELEMENTOCLASE_H
