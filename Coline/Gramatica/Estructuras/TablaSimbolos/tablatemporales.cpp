#include "tablatemporales.h"

TablaTemporales::TablaTemporales()
{
    this->tabla.clear(); //TABLA VACIA
}

/**
 * @brief TablaTemporales::addTemporal
 * @param id
 * @param valor
 * @return true si se dio con existo, false sino
 */
bool TablaTemporales::addTemporal(std::string id, double valor)
{
    try
    {
        if(!existeTemporal(id)) // SI NO EXISTE EL TEMPORAL INDICADO....
        {
            this->tabla[id] = valor; // AGREGA EL VALOR
            return  true;
        }
        else { // SI SI EXISTE... ES ERROR
            return false;
        }
    } catch (int error)
    {
        printf("error en tabla de simbolos");
        printf("%i", error);
        return  false;
    }
}

/**
 * @brief TablaTemporales::existeTemporal
 * @param id
 * @return true si existe, false sino
 */
bool TablaTemporales::existeTemporal(std::string id)
{
    if(this->tabla.count(id)!=0)
    {
        return true;
    }
    return false;
}

/**
 * @brief TablaTemporales::getRealValueFron
 * @param id
 * @return el valor del temporal especificado
 */
double TablaTemporales::getRealValueFron(std::string id)
{
    if(existeTemporal(id))
    {
        return this->tabla[id];
    }
    throw 102;
}

/**
 * @brief TablaTemporales::actualizaTemporal
 * @param id
 * @param valor
 */
void TablaTemporales::actualizaTemporal(std::string id, double valor)
{
    if(existeTemporal(id))
    {
        this->tabla[id] = valor;
    }
    else {
        throw 102;
    }
}


