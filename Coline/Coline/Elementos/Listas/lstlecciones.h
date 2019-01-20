#ifndef LSTLECCIONES_H
#define LSTLECCIONES_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Elementos/elementoleccion.h"

#include <qtablewidget.h>


class tablaSimbolos;

class lstLecciones
{
public:
    tablaSimbolos *tabla;
    QList<elementoLeccion*> listaLecciones;
    int index=0;
    lstLecciones(tablaSimbolos *tabla);

    void insertar(elementoLeccion *nuevaLec);
};

#endif // LSTLECCIONES_H
