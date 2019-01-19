#ifndef NUEVALECCION_H
#define NUEVALECCION_H

#include <QDialog>
namespace Ui {
class nuevaLeccion;
}

class nuevaLeccion : public QDialog
{
    Q_OBJECT

public:
    bool esACoach=false;
    explicit nuevaLeccion(QWidget *parent = 0);
    ~nuevaLeccion();
    Ui::nuevaLeccion *ui;
};

#endif // NUEVALECCION_H
