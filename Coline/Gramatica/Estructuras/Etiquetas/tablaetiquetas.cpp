#include "tablaetiquetas.h"
/**
 * @brief TablaEtiquetas::TablaEtiquetas
 */
TablaEtiquetas::TablaEtiquetas()
{
    this->etiquetas.clear(); // VACIA LAS ETIQUETAS
}

/**
 * @brief TablaEtiquetas::existeEtiqueta
 * @param id
 * @return verdadero si existe, falso sino
 */
bool TablaEtiquetas::existeEtiqueta(std::string id)
{
    if(this->etiquetas.count(id)==1)
    {
        return true;
    }
    return  false;
}

/**
 * @brief TablaEtiquetas::addEtiqueta
 * @param id
 * @param linea
 * @return verdadero si la agrega, falso sino
 */
bool TablaEtiquetas::addEtiqueta(std::string id, int linea)
{
    try {
        if(!existeEtiqueta(id))
        {
            this->etiquetas[id] = linea;
            return  true;
        }
        else {
            return  false;
        }
    } catch (int error) {
        printf("error al insertar nueva etiqueta");
        printf("%i", error);
        return  false;
    }
}

/**
 * @brief TablaEtiquetas::getNumeroInstruccion
 * @param id
 * @return el numero de instruccion o error de no existir
 */
int TablaEtiquetas::getNumeroInstruccion(std::string id)
{
    if(existeEtiqueta(id))
    {
        return this->etiquetas[id];
    }
    throw 102;
}
