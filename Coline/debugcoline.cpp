#include "debugcoline.h"
#include "ui_debugcoline.h"

DebugColine::DebugColine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DebugColine)
{
    ui->setupUi(this);



/*
 * Cargando el editor de salida
*/
/*

  QWidget *tbPestnia=new QWidget(ui->tabSalida);
  txtEditor=new CodeEditor();

  Highlighter *highlighter;

  highlighter = new Highlighter(txtEditor->document());




  QHBoxLayout *layout = new QHBoxLayout;
  layout->addWidget(txtEditor);

  txtEditor->setLineWrapMode(QPlainTextEdit::NoWrap);

  tbPestnia->setLayout(layout);


  //se agrega al elemento gráfico
  ui->tabSalida->addTab(tbPestnia, "Salida 3D");
  */


}

DebugColine::~DebugColine()
{
    delete ui;
}

void DebugColine::on_btnCancelar_clicked()
{
    tabla->modoDebuger=false;
    this->close();
}

void DebugColine::on_btnSiguiente_clicked()
{
    this->close();
}
