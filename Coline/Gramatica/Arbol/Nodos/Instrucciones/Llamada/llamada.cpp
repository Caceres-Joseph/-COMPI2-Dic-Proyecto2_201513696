#include "llamada.h"
#include "Gramatica/inclusionnodos.h"
Llamada::Llamada(int linea, int columna, std::string archivo, tablaSimbolos *tabla, std::string id):NodoAST (linea, columna, archivo, tabla)
{
    this->id = id;
    this->type = "LLAMADA";
}


void Llamada::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        tabla->debuger3D(entorno,temporales,linea);

        if(entorno->metodos.count(this->id)==1)
        {
            ASTList *l = entorno->metodos[this->id];
            std::vector<NodoAST*> nodos = l->instrucciones;
            // GUARDANDO VALORES ANTERIORES....
            /////////////////////////////////
            int IP_ANTERIOR = entorno->IP;
            entorno->IP = 0;
            /////////////////////////////////
            TablaTemporales *t = new TablaTemporales();
            TablaEtiquetas *t2 = new TablaEtiquetas();
            /////////////////////////////////
            /// LLENANDO LAS ETIQUETAS
            for(int x = 0; x < nodos.size(); x++)
            {
                LlenarEtiquetas(t2, nodos[x], x);
            }
            /////////////////////////////////
            while(entorno->IP < nodos.size())
            {
                CasteaYEjecuta(entorno, t, t2, nodos[entorno->IP]);
            }
            ///////////////////////////////////
            entorno->IP = IP_ANTERIOR;
        }
        else {
            printf("El metodo especificado no existe: Linea: %i", this->linea);
        }
    } catch (int error) {
        printf("Error en la llamada a un metodo en linea: %i", this->linea);
        // AQUI VEO LOS ERRORES...

    }
}

void Llamada::CasteaYEjecuta(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas, NodoAST *i)
{
    try {
        if(i->type.compare("ASIGNACION")==0)
        {
            Asignacion *a = (Asignacion*)i;
            a->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("ASIGNACION_HEAP")==0)
        {
            AsignacionHeap *a = (AsignacionHeap*)i;
            a->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("ASIGNACION_POOL")==0)
        {
            AsignacionPool *a = (AsignacionPool*)i;
            a->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("ASGINACION_STACK")==0)
        {
            AsignacionStack *a = (AsignacionStack*)i;
            a->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("CONDICIONAL")==0)
        {
            Condicional *c = (Condicional*)i;
            c->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("DECLARA_METODO")==0)
        {
            DeclaracionMetodo *d = (DeclaracionMetodo*)i;
            d->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("ETIQUETA")==0)
        {
            Etiqueta *e = (Etiqueta*)i;
            e->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("IMPRIMIR")==0)
        {
            ImprimirFun *imp = (ImprimirFun*)i;
            imp->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("LLAMADA")==0)
        {
            Llamada *l = (Llamada*)i;
            l->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("NO_CONDICIONAL")==0)
        {
            NoCondicional *n = (NoCondicional*)i;
            n->Ejecutar(entorno, temporales, etiquetas);
        }
        else if(i->type.compare("OUTSTR")==0)
        {
            OutStr *o = (OutStr*)i;
            o->Ejecutar(entorno, temporales, etiquetas);
        }
        entorno->IP = entorno->IP+1; //AUMENTANDO INSTRUCCION
        //printf("--**--\n");
    } catch (int error) {
        //ERRORES
    }
}

void Llamada::LlenarEtiquetas(TablaEtiquetas *t, NodoAST *i, int index)
{
    try {
        if(i->type.compare("ETIQUETA")==0)
        {
            Etiqueta *e = (Etiqueta*)i;
            t->addEtiqueta(e->etiqueta, index);
        }
    } catch (int error) {

    }
}
