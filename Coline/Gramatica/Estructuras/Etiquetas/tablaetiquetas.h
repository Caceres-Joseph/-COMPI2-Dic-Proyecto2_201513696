#ifndef TABLAETIQUETAS_H
#define TABLAETIQUETAS_H
#include <map>

class TablaEtiquetas
{
public:
    TablaEtiquetas(); //CONSTRUCTOR DEL HASH DE ETIQUETAS
    bool existeEtiqueta(std::string id); //VERFICIA SI LA ETIQUETA EXISTE
    bool addEtiqueta(std::string id, int linea); // AGREGA UNA NUEVA ETIQUETA
    int getNumeroInstruccion(std::string id); // OBTIENE EL NUMERO DE INSTRUCCION RELACIONADA A LA ETIQUETA
private:
    std::map<std::string, int> etiquetas;
};

#endif // TABLAETIQUETAS_H
