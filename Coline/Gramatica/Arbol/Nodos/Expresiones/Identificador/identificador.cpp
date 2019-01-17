#include "identificador.h"

identificador::identificador(int linea, int columna, std::string archivo, tablaSimbolos *tabla, std::string id):NodoAST (linea, columna, archivo, tabla)
{
    this->id = id;
    this->type = "IDENTIFICADOR";
}

double identificador::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        if(temporales->existeTemporal(this->id))
        {
            double val = temporales->getRealValueFron(this->id);
            return val;
        }
        else if(this->id.compare("P")== 0){
            return  (double)entorno->P;
        }
        else if(this->id.compare("S")==0)
        {
            return  (double)entorno->S;
        }
        else if(this->id.compare("H")==0)
        {
            return (double)entorno->H;
        }
        else {
            //ERROR EL ID NO EXISTE...
            printf("El id indicado no existe: Linea: %i | ID: %s", this->linea, this->id.c_str());
        }
    } catch (int error) {
        printf("Error el devolver valor de un ID, Linea: %i |  codigo: %i \n", this->linea, error);
    }
    return 0;
}
