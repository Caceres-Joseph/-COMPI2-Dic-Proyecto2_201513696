#ifndef PARTICIPARLECCION_H
#define PARTICIPARLECCION_H

#include <QDialog>

namespace Ui {
class participarLeccion;
}

class participarLeccion : public QDialog
{
    Q_OBJECT

public:
    explicit participarLeccion(QWidget *parent = 0);
    ~participarLeccion();

private slots:
    void on_btnCalificar_clicked();

    void on_btnEvaluar_clicked();

private:
    Ui::participarLeccion *ui;
};

#endif // PARTICIPARLECCION_H
