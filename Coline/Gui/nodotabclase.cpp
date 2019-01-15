#include "nodotabclase.h"

nodoTabClase::nodoTabClase(QString nombre, tablaSimbolos *tabla, QTabWidget *padre)
{
    this->tabPadre=padre;
    this->nombre=nombre;
    this->tabla=tabla;
    tbPestnia=new QWidget(padre);
    txtEditor=new CodeEditor();

    Highlighter *highlighter;

    highlighter = new Highlighter(txtEditor->document());




    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(txtEditor);

    txtEditor->setLineWrapMode(QPlainTextEdit::NoWrap);

    tbPestnia->setLayout(layout);


    //se agrega al elemento gráfico
    padre->addTab(tbPestnia, nombre);
}


QWidget * nodoTabClase::getPestania(){
    return tbPestnia;
}
