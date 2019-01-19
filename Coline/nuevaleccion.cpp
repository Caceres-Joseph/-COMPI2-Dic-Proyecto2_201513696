#include "nuevaleccion.h"
#include "ui_nuevaleccion.h"

nuevaLeccion::nuevaLeccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevaLeccion)
{
    ui->setupUi(this);
}

nuevaLeccion::~nuevaLeccion()
{
    delete ui;
}
