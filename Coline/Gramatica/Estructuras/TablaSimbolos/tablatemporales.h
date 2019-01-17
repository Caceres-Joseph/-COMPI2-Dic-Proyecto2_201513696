#ifndef TABLATEMPORALES_H
#define TABLATEMPORALES_H
#include <map>

class TablaTemporales
{
public:
    TablaTemporales(); //CONSTRUCTOR DE LA TABLA
    bool addTemporal(std::string id, double valor); //AGREGARA UN TEMPORAL A LA TABLA
    bool existeTemporal(std::string id); // VERIFICA SI EXISTE
    double getRealValueFron(std::string id); // OBTIENE EL VALOR DEL TEMPORAL ESPECIFICADO
    void actualizaTemporal(std::string id, double valor); //ACTUALIZA EL VALOR DEL TEMPORAL CON EL NUEVO VALOR
private:
    std::map<std::string, double> tabla;
};

#endif // TABLATEMPORALES_H
