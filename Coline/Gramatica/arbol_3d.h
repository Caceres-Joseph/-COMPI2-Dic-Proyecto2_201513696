#ifndef ARBOL_3D_H
#define ARBOL_3D_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
#include "Gramatica/parser1.h"
#include "Gramatica/scanner1.h"


#include <QFileDialog>
#include <string>
#include <QString>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <QTextStream>
#include <QMessageBox>

extern void setSalida3(tablaSimbolos *tabla);
class arbol_3d
{
public:
    tablaSimbolos *tabla;
    arbol_3d(tablaSimbolos *tabla);

    //extern tablaSimbolos *tabla3;
    void ejecutar();
};

#endif // ARBOL_3D_H
