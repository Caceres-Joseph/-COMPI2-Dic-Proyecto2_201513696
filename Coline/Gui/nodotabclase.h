#ifndef NODOTABCLASE_H
#define NODOTABCLASE_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
#include <QHBoxLayout>

#include "Gui/codeeditor.h"
#include "Gui/highlighter.h"

class nodoTabClase
{
public:
    QString nombre;
    QWidget *tbPestnia;
    CodeEditor *txtEditor;
    tablaSimbolos *tabla;
    QTabWidget *tabPadre;


    nodoTabClase(QString nombre,tablaSimbolos *tabla, QTabWidget *padre);

    QWidget *getPestania();


};

#endif // NODOTABCLASE_H
