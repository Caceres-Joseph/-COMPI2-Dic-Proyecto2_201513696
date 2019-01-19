#ifndef CREARLECCION_H
#define CREARLECCION_H

#include <QDialog>

#include "mainwindow.h"
#include "nuevaleccion.h"
#include "participarleccion.h"

namespace Ui {
class CrearLeccion;
}

class CrearLeccion : public QDialog
{
    Q_OBJECT

public:

    participarLeccion *Leccion;
    explicit CrearLeccion(QWidget *parent = 0);
    ~CrearLeccion();

private slots:
    void on_btnACoach_clicked();

    void on_btnGCoach_clicked();

    void on_btnLibre_clicked();

    void on_btnParticipar_clicked();

private:
    Ui::CrearLeccion *ui;
};

#endif // CREARLECCION_H
