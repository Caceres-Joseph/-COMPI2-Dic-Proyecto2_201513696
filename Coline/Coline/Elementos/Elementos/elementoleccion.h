#ifndef ELEMENTOLECCION_H
#define ELEMENTOLECCION_H


#include "Coline/Elementos/Global/importar.h"
class elementoLeccion
{
public:
    QString titulo;
    QString explicacion;
    QString codigoEj;
    QString enunciado;
    QString pruebas;
    bool esAcoach=false;

    elementoLeccion(QString titulo,
                    QString explicacion,
                    QString codigoEj,
                    QString enunciado,
                    QString pruebas,
                    bool esAcoach);
};

#endif // ELEMENTOLECCION_H
