#include "debugcoline.h"
#include "ui_debugcoline.h"

DebugColine::DebugColine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DebugColine)
{
    ui->setupUi(this);


  CodeEditor * txtEditor=new CodeEditor();



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
