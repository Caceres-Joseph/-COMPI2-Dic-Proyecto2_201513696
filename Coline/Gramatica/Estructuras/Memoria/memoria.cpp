#include "memoria.h"

/**
 * @brief memoria::memoria
 * Constructor de la estructura
 */
memoria::memoria()
{
    this->mapa.clear(); // MAPA LIBRE
}

/**
 * @brief memoria::getPointer
 * @return el puntero de la estructura
 */
int memoria::getPointer()
{
    return this->puntero;
}

/**
 * @brief memoria::setPointer
 * @param valor
 * Actualiza el valor del puntero
 */
void memoria::setPointer(int valor)
{
    this->puntero  = valor;
}

/**
 * @brief memoria::insertar
 * @param indice
 * @param valor
 * @return verdadero si la insercion fue correcta, falso si algo fallo
 *
 */
bool memoria::insertar(int indice, double valor)
{
    try
    {
        this->mapa[indice] = valor; // AGREGO EL VALOR A LA POSICION INDICADA
        return  true;
    } catch (int x)
    {
        printf("Error al agregar a estructura ");
        printf("%i",x);
        return false;
    }
}

/**
 * @brief memoria::getValueAt
 * @param indice
 * @return el valor de la posicion indicada
 * lanza excepcion en caso de que no exista el valor indicado
 */
double memoria::getValueAt(int indice)
{
    if(this->mapa.count(indice)==1)
    {
        return this->mapa[indice];
    }
    else {
        throw 101; //ERROR DE EL DATO NO SE ENCONTRO
    }
}
