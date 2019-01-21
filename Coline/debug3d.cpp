#include "debug3d.h"
#include "ui_debug3d.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
debug3d::debug3d(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::debug3d)
{
    ui->setupUi(this);

}

debug3d::~debug3d()
{
    delete ui;
}

void debug3d::on_btnSiguientePaso_clicked()
{
    tabla->dbg_pasoPaso();
    this->close();
}

void debug3d::on_btnCancelar_clicked()
{

    tabla->modoDebuger=false;
    this->close();
}

void debug3d::on_btnSiguienteInstruct_clicked()
{
    tabla->dbg_instruccion();
    this->close();
}
