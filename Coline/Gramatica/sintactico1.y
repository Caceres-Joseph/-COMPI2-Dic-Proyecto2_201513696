
%define api.prefix {zz}

%{
#include "scanner1.h"
#include <iostream>
#include <string>
#include "Gramatica/inclusionnodos.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h" 
#include "Coline/Elementos/Tablas/tablasimbolos.h"
//class tablaSimbolos;
/*
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Arbol/Abstraccion/astlist.h"
*/
extern int zzlineno; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern char *zztext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON
extern int nLine;
tablaSimbolos *tabla3;

int zzerror(const char* mens){
//metodo que se llama al haber un error sintactico
//SE IMPRIME EN CONSOLA EL ERROR
std::cout <<mens<<" "<<zztext<< std::endl;
return 0;
}
void setSalida3(tablaSimbolos *tabla2) { 
 tabla3=tabla2; 
 nLine=1;
}


static Entorno3D *entorno;
%}
//error-verbose si se especifica la opcion los errores sintacticos son especificados por BISON
%error-verbose

%union{
//se especifican los tipo de valores para los no terminales y lo terminales
ASTList *Listado;
NodoAST *ASTNode;
int OPERADOR;
char TEXT[256];//NO PUEDO METER UN STRING AQUI!!!!
}

/*COLOCANDO LOS TIPOS DE LOS TOTKES*/ 
// - ARITMETICAS
%token<TEXT> mas
%token<TEXT> menos
%token<TEXT> mult
%token<TEXT> pot
%token<TEXT> divi
%token<TEXT> mod
%token<TEXT> coma
// - RELACIONALES
%token<TEXT> eql
%token<TEXT> nequal
%token<TEXT> gtr
%token<TEXT> lwr
%token<TEXT> grequal
%token<TEXT> lrequal
// - PUNTUACION
%token<TEXT> ptcoma
%token<TEXT> dpts
%token<TEXT> okey
%token<TEXT> ckey
%token<TEXT> oparent
%token<TEXT> cparent
%token<TEXT> asignacion
%token<TEXT> obracket
%token<TEXT> cbracket
// - PARABRAS RESERVADAS
%token<TEXT> gto
%token<TEXT> vacio
%token<TEXT> si
%token<TEXT> imprimir
%token<TEXT> charvalue
%token<TEXT> intvalue
%token<TEXT> floatvalue
%token<TEXT> getbool
%token<TEXT> getnum
%token<TEXT> outstr
%token<TEXT> outnum
%token<TEXT> instr
%token<TEXT> innum
%token<TEXT> show
%token<TEXT> getrandom
%token<TEXT> getarrlength
%token<TEXT> getstrlength
%token<TEXT> pila
%token<TEXT> monticulo
%token<TEXT> pool
%token<TEXT> cleanFunc
// - EXPRESIONES REGULARES
%token<TEXT> ente
%token<TEXT> flota
%token<TEXT> etiqueta
%token<TEXT> identi

//TIPOS DE NO TERMINALES
%type<ASTNode> INICIO
%type<Listado> INSTRUCCIONES
%type<ASTNode> ETQ
%type<ASTNode> PRINT_STR
//%type<ASTNode> METODO
%type<ASTNode> LLAMADA
%type<ASTNode> SALTO_NO_COND
%type<ASTNode> SALTO_COND
%type<ASTNode> ASIGNA
%type<Listado> SENTENCIAS
%type<ASTNode> EXPRESION
%type<ASTNode> VALOR
%type<OPERADOR> ARITMETICO
%type<ASTNode> EXP_REL
%type<ASTNode> FUN_CLEAN
%type<ASTNode> PRINT_FUN
%type<OPERADOR> RELACIONAL

/*SIMBOLO CON EL QUE INICIA*/
%start INICIO

%%
/*GRAMATICA*/
INICIO :{ entorno = new Entorno3D(); } INSTRUCCIONES
        {
            
            ASTList *l = $2;
            entorno->metodos["inicio"] = l;
            Llamada *m = new Llamada(nLine,0, "entrada", tabla3 , "inicio");
            m->Ejecutar(entorno, new TablaTemporales(), new TablaEtiquetas());
            $$ = new NodoAST(0,0, "", tabla3);
        }
        ;

INSTRUCCIONES : INSTRUCCIONES ETQ
        {
            ASTList *l = $1;
            l->addToList($2);
            $$ = l;
        }
        | INSTRUCCIONES METODO
        {
            ASTList *l = $1;
            $$ = l;
        }
        | INSTRUCCIONES LLAMADA
        {
            ASTList *l = $1;
            l->addToList($2);
            $$ = l;
        }
        | INSTRUCCIONES SALTO_NO_COND
        {
            ASTList *l = $1;
            l->addToList($2);
            $$ = l;
        }
        | INSTRUCCIONES ASIGNA
        {
            ASTList *l = $1;
            l->addToList($2);
            $$ = l;
        }
        | INSTRUCCIONES SALTO_COND
        {
            ASTList *l = $1;
            l->addToList($2);
            $$ = l;
        }
        | INSTRUCCIONES FUN_CLEAN
        {
            ASTList *l = $1;
            l->addToList($2);
            $$ = l;
        }
        | INSTRUCCIONES PRINT_FUN
        {
            ASTList *l = $1;
            l->addToList($2);
            $$ = l;
        }
        | INSTRUCCIONES PRINT_STR
        {
            ASTList *l = $1;
            l->addToList($2);
            $$ = l;
        }
        | SALTO_COND
        {
            ASTList *l = new ASTList();
            l->addToList($1);
            $$ = l;
        }
        | ASIGNA
        {
            ASTList *l = new ASTList();
            l->addToList($1);
            $$ = l;
        }
        | SALTO_NO_COND
        {
            ASTList *l = new ASTList();
            l->addToList($1);
            $$ = l;
        }
        | LLAMADA
        {
            ASTList *l = new ASTList();
            l->addToList($1);
            $$ = l;
        }
        | METODO
        {
            ASTList *l = new ASTList();
            $$ = l;
            
        }
        | ETQ
        {
            ASTList *l = new ASTList();
            l->addToList($1);
            $$ = l;
        }
        | FUN_CLEAN
        {
            ASTList *l = new ASTList();
            l->addToList($1);
            $$ = l;
        }
        | PRINT_FUN
        {
            ASTList *l = new ASTList();
            l->addToList($1);
            $$ = l;
        }
        | PRINT_STR
        {
            ASTList *l = new ASTList();
            l->addToList($1);
            $$ = l;
        }
        ;

/*METODOS QUE SE LLAMAN EN LAS INSTRUCCIONES 3D*/
METODO : vacio identi oparent cparent okey ckey
       {
           metodo *m = new metodo(@1.first_line, 0, "entrada", tabla3,  $2);
           entorno->metodos[$2] = new ASTList();
       }
       | vacio identi oparent cparent okey SENTENCIAS ckey
       {
           ASTList *l = $6;
           metodo *m = new metodo(@1.first_line, 0, "entrada", tabla3, $2, l->instrucciones);
           entorno->metodos[$2] = $6;
       }
       ;

SENTENCIAS : SENTENCIAS  ETQ
            {
                ASTList *l = $1;
                l->addToList($2);
                $$ = l;
            }
           | SENTENCIAS  LLAMADA
           {
               ASTList *l = $1;
               l->addToList($2);
               $$ = l;
           }
           | SENTENCIAS  SALTO_NO_COND
           {
               ASTList *l = $1;
               l->addToList($2);
               $$ = l;
           }
           | SENTENCIAS  SALTO_COND
           {
               ASTList *l = $1;
               l->addToList($2);
               $$ = l;
           }
           | SENTENCIAS  ASIGNA
           {
               ASTList *l = $1;
               l->addToList($2);
               $$ = l;
           }
           | SENTENCIAS  FUN_CLEAN
           {
               ASTList *l = $1;
               l->addToList($2);
               $$ = l;
           }
           | SENTENCIAS  PRINT_FUN
           {
               ASTList *l = $1;
               l->addToList($2);
               $$ = l;
           }
           | SENTENCIAS  PRINT_STR
           {
               ASTList *l = $1;
               l->addToList($2);
               $$ = l;
           }
           | ETQ
           {
               ASTList *l = new ASTList();
               l->addToList($1);
               $$ = l;
           }
           | LLAMADA
           {
               ASTList *l = new ASTList();
               l->addToList($1);
               $$ = l;
           }
           | SALTO_COND
           {
               ASTList *l = new ASTList();
               l->addToList($1);
               $$ = l;
           }
           | SALTO_NO_COND
           {
               ASTList *l = new ASTList();
               l->addToList($1);
               $$ = l;
           }
           | ASIGNA
           {
               ASTList *l = new ASTList();
               l->addToList($1);
               $$ = l;
           }
           | FUN_CLEAN
           {
               ASTList *l = new ASTList();
               l->addToList($1);
               $$ = l;
           }
           | PRINT_FUN
           {
               ASTList *l = new ASTList();
               l->addToList($1);
               $$ = l;
           }
           | PRINT_STR
           {
               ASTList *l = new ASTList();
               l->addToList($1);
               $$ = l;
           }
           ;

/*INSTRUCCIONES DE ETIQUETA QUE SIRVEN PARA LOS SALTOS*/
ETQ : etiqueta dpts
    {
        Etiqueta *e = new Etiqueta(nLine, 0, "entrada",tabla3, $1);
        //e->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
        $$ = e;
    }
    ;

/*LLAMADA A METODOS*/
LLAMADA : identi oparent cparent ptcoma
        {
            Llamada *l = new Llamada(nLine, 0, "entrada",tabla3, $1);
            //l->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            $$ = l;
        }
        ;

/*SALTO INCONDICIONAL*/
SALTO_NO_COND : gto etiqueta ptcoma
        {
            NoCondicional *n = new NoCondicional(nLine, 0, "entrada",tabla3, $2);
            //n->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            $$ = n;
        }
        ;

/*FUNCION PARA LIMPIAR*/
FUN_CLEAN : cleanFunc oparent VALOR coma VALOR cparent ptcoma
        {
            // AUN SIN IMPLEMENTAR
            printf("FUNCION DE LIMPIRA MEMORIA AUN NO IMPLEMENTADA");
            $$ = new NodoAST(0,0,"", tabla3);
        }
        ;

/*FUNCION PARA IMPRIMIR */
PRINT_FUN : imprimir oparent charvalue coma VALOR cparent ptcoma
         {
             
             ImprimirFun *i = new ImprimirFun(nLine, 0, "entrada", tabla3, 0, $5);
             //i->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
             $$ = i;
         }
         | imprimir oparent intvalue coma VALOR cparent ptcoma
         { 
             ImprimirFun *i = new ImprimirFun(nLine, 1, "entrada",tabla3,1, $5);
             //i->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
             $$ = i;
         }
         | imprimir oparent floatvalue coma VALOR cparent ptcoma
         {
             
             ImprimirFun *i = new ImprimirFun(nLine, 2, "entrada",tabla3,2, $5);
             //i->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
             $$ = i;
         }
         ;

/*ASIGNACION*/
ASIGNA : identi asignacion EXPRESION ptcoma
        {
            NodoAST *valor = $3;
            std::string id($1);
            Asignacion *a = new Asignacion(nLine, 0, "entrada", tabla3, id, valor);
            //a->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            $$ = a;
        }
        | pila obracket VALOR cbracket asignacion EXPRESION ptcoma
        {
            NodoAST *valor = $3;
            NodoAST *asignado = $6;
            AsignacionStack *a = new AsignacionStack(nLine, 0, "entrada", tabla3, valor, asignado);
            //a->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            $$ = a;
        }
        | monticulo obracket VALOR cbracket asignacion EXPRESION ptcoma
        {
            NodoAST *valor = $3;
            NodoAST *asignado = $6;
            AsignacionHeap *a = new AsignacionHeap(nLine, 0, "entrada", tabla3, valor, asignado);
            //a->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            $$ = a;
        }
        | pool obracket VALOR cbracket asignacion EXPRESION ptcoma
        {
            NodoAST *valor = $3;
            NodoAST *asignado = $6;
            AsignacionPool *a = new AsignacionPool(nLine, 0, "entrada", tabla3, valor, asignado);
            //a->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            $$ = a;
        }
        ;

/*SALTO CONDICIONAL*/
SALTO_COND : si oparent EXP_REL cparent gto etiqueta ptcoma
        {
            NodoAST *exp = $3;
            Condicional *c = new Condicional(nLine, 0, "entrada",tabla3 , exp, $6);
            //c->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            $$ = c;
        }
        ;

/* IMPRIMIR UNA CADENA DE SALIDA */
PRINT_STR : outstr oparent VALOR cparent ptcoma
        {
            OutStr *o = new OutStr(nLine, 0, "entrada",tabla3, $3);
            $$ = o;
        }
        ;

/*EXPRESIONES ARITMETICAS*/
EXPRESION : VALOR ARITMETICO VALOR
          {
                NodoAST *val1 = $1;
                NodoAST *val2 = $3;
                int oper = $2;
                Aritmetica *a = new Aritmetica(@1.first_line, 0, "entrada", tabla3, val1, val2, oper);
                $$ = a;
          }
          | VALOR
          {
              $$ = $1;
          }
          ;

VALOR : identi
      {
          identificador *ide = new identificador(@1.first_line, 0, "entrada", tabla3, $1);
          $$ = ide;
      }
      | ente
      {
            int val = std::stoi($1);
            Entero *ent = new Entero(@1.first_line, 0, "entrada", tabla3, val);
            $$ = ent;
      }
      | flota
      {
            double val = atof($1);
            flotante *f = new flotante(@1.first_line, 0, "entrada", tabla3, val);
            $$ = f;
      }
      | pila obracket VALOR cbracket
      {
          AccesoStack *v = new AccesoStack(@1.first_line, 0, "entrada", tabla3, $3);
          $$ = v;
      }
      | monticulo obracket VALOR cbracket
      {
          AccesoHeap *v = new AccesoHeap(@1.first_line, 0, "entrada", tabla3, $3);
          $$ = v;
      }
      | pool obracket VALOR cbracket
      {
          AccesoPool *v = new AccesoPool(@1.first_line, 0, "entrada", tabla3, $3);
          $$ = v;
      }
      | getbool oparent VALOR cparent
      {
          GetBool *b = new GetBool(@1.first_line, 0, "entrada", tabla3, $3);
          $$ = b;
      }
      | getnum oparent VALOR cparent
      {
          GetNum *g = new GetNum(@1.first_line, 0, "entrada", tabla3, $3);
          $$ = g;
      }
      | instr oparent VALOR cparent
      {
          InStr *in = new InStr(@1.first_line, 0, "entrada",tabla3, $3);
          $$ = in;
      }
      | innum oparent VALOR cparent
      {
          InNum *in = new InNum(@1.first_line, 0, "entrada", tabla3, $3);
          $$ = in;
      }
      ;

ARITMETICO : mas
           {
               $$ = 1; 
           }  
           | menos
           {
               $$ = 2; 
           }
           | divi
           {
               $$ = 4;
           }
           | mult
           {
               $$ = 5;
           }
           | mod
           {
               $$ = 6;
           }
           | pot
           {
               $$ = 7;
           }
           ;

/*EXPRESIONES RELACIONALES*/
EXP_REL : VALOR RELACIONAL VALOR
        {
            NodoAST *val1 = $1;
            NodoAST *val2 = $3;
            int oper = $2;
            Relacional *r = new Relacional(@1.first_line, 0, "entrada", tabla3, val1, val2, oper);
            $$ = r;
        }
        ;

RELACIONAL : eql
         {
             $$ = 7;
         }
         | nequal
         {
             $$ = 8;
         }
         | gtr
         {
             $$ = 9;
         }
         | lwr
         {
             $$ = 10;
         }
         | grequal
         {
             $$ = 11;
         }
         | lrequal
         {
             $$ = 12;
         }
         ;
