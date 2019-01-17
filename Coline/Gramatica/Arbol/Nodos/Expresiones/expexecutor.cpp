// INCLUYENDO LAS EXPRESIONES
#include "AccesoHeap/accesoheap.h"
#include "AccesoPool/accesopool.h"
#include "AccesoStack/accesostack.h"
#include "Aritmetico/aritmetica.h"
#include "Entero/entero.h"
#include "Flotante/flotante.h"
#include "Identificador/identificador.h"
#include "Relacional/relacional.h"
#include "getNum/getnum.h"
#include "getBool/getbool.h"
#include "inStr/instr.h"
#include "inNum/innum.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"


double getVal(NodoAST *i, Entorno3D *e, TablaEtiquetas *t, TablaTemporales *t2)
{
    try {
        if(i->type.compare("ACCESO_HEAP")==0)
        {
            AccesoHeap *a = (AccesoHeap*)i;
            return  a->getValor(e, t2, t);
        }
        else if(i->type.compare("ACCESSO_POOL")==0)
        {
            AccesoPool *a = (AccesoPool*)i;
            return  a->getValor(e,t2,t);
        }
        else if(i->type.compare("ACCESO_STACK")==0)
        {
            AccesoStack *a = (AccesoStack*)i;
            return a->getValor(e, t2, t);
        }
        else if(i->type.compare("ARITMETICA")==0)
        {
            Aritmetica *a = (Aritmetica*)i;
            return  a->getValor(e,t2,t);
        }
        else if(i->type.compare("ENTERO")==0)
        {
            Entero *en = (Entero*)i;
            return en->getValor(e, t2, t);
        }
        else if(i->type.compare("FLOTANTE")==0)
        {
            flotante *f = (flotante*)i;
            return f->getValor(e,t2,t);
        }
        else if(i->type.compare("IDENTIFICADOR")==0)
        {
            identificador *id = (identificador*)i;
            return  id->getValor(e,t2,t);
        }
        else if(i->type.compare("RELACIONAL")==0)
        {
            Relacional *r = (Relacional*)i;
            return r->getValor(e, t2, t);
        }
        else if(i->type.compare("GETNUM")==0)
        {
            GetNum *g = (GetNum*)i;
            return g->getValor(e, t2, t);
        }
        else if(i->type.compare("GETBOOL")==0)
        {
            GetBool *b = (GetBool*)i;
            return  b->getValor(e, t2, t);
        }
        else if(i->type.compare("INSTR")==0)
        {
            InStr *in = (InStr*)i;
            return in->getValor(e, t2, t);
        }
        else if(i->type.compare("INNUM")==0)
        {
            InNum *in = (InNum*)i;
            return in->getValor(e,t2,t);
        }
    } catch (int error) {
        printf("%i",error);
    }
    return 0;
}
