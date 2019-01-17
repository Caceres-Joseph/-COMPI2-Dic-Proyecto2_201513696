#ifndef DEBUG3D_H
#define DEBUG3D_H

#include <QDialog>
class tablaSimbolos;
namespace Ui {
class debug3d;
}

class debug3d : public QDialog
{
    Q_OBJECT

public:
    explicit debug3d(QWidget *parent = 0);
    ~debug3d();

    Ui::debug3d *ui;
    tablaSimbolos *tabla;
private slots:
    void on_btnSiguientePaso_clicked();
    void on_btnCancelar_clicked();
};

#endif // DEBUG3D_H
