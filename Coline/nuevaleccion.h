#ifndef NUEVALECCION_H
#define NUEVALECCION_H
#include "Coline/Elementos/Tablas/tablasimbolos.h"
#include <QDialog>

namespace Ui {
class nuevaLeccion;
}

class nuevaLeccion : public QDialog
{
    Q_OBJECT

public:

    tablaSimbolos *tabla;
    bool esACoach=false;
    explicit nuevaLeccion(QWidget *parent = 0);
    ~nuevaLeccion();
    Ui::nuevaLeccion *ui;
private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // NUEVALECCION_H
