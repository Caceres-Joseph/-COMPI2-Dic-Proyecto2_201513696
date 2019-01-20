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

    tablaSimbolos *tabla;
    participarLeccion *participar;
    nuevaLeccion *nuevaLec;
    MainWindow *ide;
    explicit CrearLeccion(QWidget *parent = 0);
    ~CrearLeccion();

    void on_btnACoach_clicked();

    void on_btnGCoach_clicked();

    void on_btnLibre_clicked();

    void on_btnParticipar_clicked();

    Ui::CrearLeccion *ui;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // CREARLECCION_H
