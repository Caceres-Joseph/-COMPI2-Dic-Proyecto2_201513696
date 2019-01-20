#ifndef PARTICIPARLECCION_H
#define PARTICIPARLECCION_H

#include <QDialog>

#include "ui_participarleccion.h"
namespace Ui {
class participarLeccion;
}

class participarLeccion : public QDialog
{
    Q_OBJECT

public:
    explicit participarLeccion(QWidget *parent = 0);
    ~participarLeccion();

    void on_btnCalificar_clicked();

    void on_btnEvaluar_clicked();

    Ui::participarLeccion *ui;
private slots:
    void on_pushButton_clicked();
};

#endif // PARTICIPARLECCION_H
