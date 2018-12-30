#ifndef NODOSIMPORT_H
#define NODOSIMPORT_H


#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_clase.h"

#include "Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_metodo.h"
#include "Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_meto_var.h"
#include "Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_variable.h"
#include "Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_variablep.h"

#include "Coline/Gramatica/Arbol/Nodos/Asignar_Valor/_asig_valor.h"

#include "Coline/Gramatica/Arbol/Nodos/Cuerpo/_cuerpo.h"
#include "Coline/Gramatica/Arbol/Nodos/Cuerpo/_lst_cuerpo.h"
#include "Coline/Gramatica/Arbol/Nodos/Cuerpo/_lst_cuerpo2.h"

#include "Coline/Gramatica/Arbol/Nodos/Cuerpo_Clase/_cp_clase.h"
#include "Coline/Gramatica/Arbol/Nodos/Cuerpo_Clase/_cuerpo_clase.h"

#include "Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_global.h"
#include "Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_sinvisibi.h"
#include "Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_val.h"

#include "Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_constructor.h"
#include "Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_main.h"
#include "Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_metodo.h"
#include "Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_sobrescritura.h"

#include "Coline/Gramatica/Arbol/Nodos/FuncionesNativas/_imprimir.h"

#include "Coline/Gramatica/Arbol/Nodos/IdVar_func/_id_var_func_padre.h"
#include "Coline/Gramatica/Arbol/Nodos/IdVar_func/_id_var_func.h"
#include "Coline/Gramatica/Arbol/Nodos/IdVar_func/_lst_puntosp_padre.h"
#include "Coline/Gramatica/Arbol/Nodos/IdVar_func/_lst_puntosp.h"

#include "Coline/Gramatica/Arbol/Nodos/Inicio/_clase.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_extender.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_import.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_lst_clase.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_lst_import.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_s.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_super.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_tipo.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_visibilidad.h"

#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_llaves_val_p.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes_val.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_llaves_val.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_par_corchetes_vacios.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_par_corchetes_val.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_var_arreglo.h"

#include "Coline/Gramatica/Arbol/Nodos/Parametros/_lst_parametros.h"
#include "Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.h"
#include "Coline/Gramatica/Arbol/Nodos/Parametros/_parametro.h"

#include "Coline/Gramatica/Arbol/Nodos/Sentencia_Control/_continuar.h"
#include "Coline/Gramatica/Arbol/Nodos/Sentencia_Control/_retorno.h"
#include "Coline/Gramatica/Arbol/Nodos/Sentencia_Control/_romper.h"

#include "Coline/Gramatica/Arbol/Nodos/Sentencias/Caso/_caso.h"
#include "Coline/Gramatica/Arbol/Nodos/Sentencias/Caso/_cuerpo_case.h"

#include "Coline/Gramatica/Arbol/Nodos/Sentencias/DoWhile/_dowhile.h"

#include "Coline/Gramatica/Arbol/Nodos/Sentencias/For/_for.h"

#include "Coline/Gramatica/Arbol/Nodos/Sentencias/Repetir/_repetir.h"

#include "Coline/Gramatica/Arbol/Nodos/Sentencias/Si/_si.h"
#include "Coline/Gramatica/Arbol/Nodos/Sentencias/Si/_sino.h"
#include "Coline/Gramatica/Arbol/Nodos/Sentencias/Si/_sino_si.h"

#include "Coline/Gramatica/Arbol/Nodos/Sentencias/Si_simplificado/_si_simplificado.h"

#include "Coline/Gramatica/Arbol/Nodos/Sentencias/While/_while.h"

#include "Coline/Gramatica/Arbol/Nodos/Sentencias/_sentencias.h"

#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/division.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/modulo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/multiplicacion.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/negativo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/potencia.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/resta.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/suma.h"

#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/diferenteque.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/igualque.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/mayorigualque.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/mayorque.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/menorigualque.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/menorque.h"

#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_valor.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/oparitmetica.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/oplogico.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/oprelacional.h"



#endif // NODOSIMPORT_H
