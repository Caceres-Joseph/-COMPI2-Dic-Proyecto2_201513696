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

void memoria::llenarTabla(QTableWidget *tablaSimb){

    //limpiando la tabla
    tablaSimb->setRowCount(0);
    // show content:
    int indice=0;
    // Create a map iterator and point to beginning of map
    std::map<int, double>::iterator it = mapa.begin();
    while (it != mapa.end())
    {
        int clave = it->first;
        double  valor= it->second;

        tablaSimb->setRowCount(indice+1);

        QTableWidgetItem *tab1=new QTableWidgetItem(QString::number(clave));
        tablaSimb->setItem(indice,0,tab1);

        QTableWidgetItem *tab2=new QTableWidgetItem(QString::number(valor));
        tablaSimb->setItem(indice,1,tab2);

        it++;
        indice++;
    }

}
