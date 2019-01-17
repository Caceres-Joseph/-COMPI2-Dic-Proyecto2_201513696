#ifndef MEMORIA_H
#define MEMORIA_H
#include <map>

/**
 * @brief The memoria class definida para el manejo de las estructuras: STACK, POOL, HEAP
 */
class memoria
{
public:
    memoria(); // CONSTRUCTOR
    int getPointer(); // OBTIENE EL PUNTERO DE LA ESTRUCTURA
    void setPointer(int valor); // SETEA EL PUNTERO A UN NUEVO VALOR
    bool insertar(int indice, double valor); // METE UN NUEVO VALOR A LA ESTRUCTURA
    double getValueAt(int indice); // OBTIENE EL VALOR POR EL INDICE INDICADO
private:
    std::map<int, double> mapa; //ESTRUCTURA QUE VA A CONTENER LOS VALORES DE TIPO DOUBLE
    int puntero; // PUNTERO DE LA ESTRUCTURA
};

#endif // MEMORIA_H
