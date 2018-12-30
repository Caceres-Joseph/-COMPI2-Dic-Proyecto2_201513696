S :  LST_IMPORT  LST_CLASE
                | LST_CLASE;


            //makestar
            LST_IMPORT :  LST_IMPORT IMPORT
            |IMPORT;


            IMPORT :  tImport  sAbreParent  valId  sPunto  valId  sCierraParent  sPuntoComa
                 ;

            //makestar
            LST_CLASE :  LST_CLASE, CLASE
            |CLASE;

            CLASE :  tClase  valId  EXTENDER  sAbreLlave  CP_CLASE  sCierraLlave
                | tClase  valId  VISIBILIDAD  EXTENDER  sAbreLlave  CP_CLASE  sCierraLlave;


            TIPO :  tEntero
                | tCadena
                | tBooleano
                | tDecimal 
                | valId 
                | tVacio //Para el metodo void, tengo que validar que no lo acepten las variables
                ;

            EXTENDER :  tPadre  valId
                | {};

            VISIBILIDAD :  tPublico
                | tPrivado
                | tProtegido;



            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Parametros
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */
            //makestar
            LST_PARAMETROS :  LST_PARAMETROS sComa PARAMETRO
            |PARAMETRO;

            PARAMETRO :  TIPO  VAR_ARREGLO;

            //makestar
            LST_VAL :  LST_VAL sComa VALOR
            |VALOR;
 


            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Cuerpo de la clase
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            //makestar
            CP_CLASE :  CP_CLASE, CUERPO_CLASE
            |CUERPO_CLASE;

            CUERPO_CLASE :  CONSTRUCTOR
                | DECLARAR_VARIABLE_GLOBAL  sPuntoComa
                | METODO
                //| SOBRESCRITURA
                | MAIN
 
            ;

            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Funciones/Metodos
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            METODO :  VISIBILIDAD  TIPO  VAR_ARREGLO  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                | TIPO  VAR_ARREGLO  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave; //metodo void

            //SOBRESCRITURA :  sArroba  tOverride  METODO;

            MAIN :  tPrincipal  sAbreParent  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave;

            CONSTRUCTOR :  valId  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave;

            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Declarar variable
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            DECLARAR_VARIABLE_GLOBAL :  TIPO  VISIBILIDAD  VAR_ARREGLO  VAL
                | TIPO  VISIBILIDAD  VAR_ARREGLO  //solo se declaro
                | DECLARAR_VARIABLE_SINVISIBI;



            DECLARAR_VARIABLE_SINVISIBI :  TIPO  VAR_ARREGLO  VAL
                | TIPO  VAR_ARREGLO;//sin visibilidad y solo declarada



            VAL :  sIgual  VALOR
                /* | sIgual  tNuevo  valId  sAbreParent  LST_VAL  sCierraParent //aqui tengo que reconocer el-> nuevo opciones()
                 | sIgual  tNuevo  TIPO  LST_CORCHETES_VAL
                 | sIgual  LST_LLAVES_VAL
                 | sIgual  tNulo*/
                ;


            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Arreglos
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            /*
            |----------------------------------------------
            | Llaves
            */

            //makePlus
            LST_LLAVES_VAL :  LST_LLAVES_VAL sComa LLAVES_VAL_P
            |LLAVES_VAL_P;



            LLAVES_VAL_P :  sAbreLlave  LST_LLAVES_VAL  sCierraLlave
                | sAbreLlave  LST_VAL  sCierraLlave;


            /*
            |----------------------------------------------
            | Corchetes
            */


            VAR_ARREGLO :  valId
                | valId  LST_CORCHETES;


            //makePlus
            LST_CORCHETES :  LST_CORCHETES PAR_CORCHETES_VACIOS
            |PAR_CORCHETES_VACIOS;

            PAR_CORCHETES_VACIOS :  sAbreCorchete  sCierraCorchete;

            PAR_CORCHETES_VAL :  sAbreCorchete  E  sCierraCorchete;

            //PAR_CORCHETES_VAL :  sAbreCorchete  VALOR  sCierraCorchete;

            //makePlus
            LST_CORCHETES_VAL :  LST_CORCHETES_VAL  PAR_CORCHETES_VAL
            |PAR_CORCHETES_VAL;



            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Para poder acceder a los metodos o variables
            |-------------------------------------------------------------------------------------------------------------------
            | Me va devolver un metodo () al final
            | Me va devolver un Id al final
            */


            ID_VAR_FUNC :  ID_VAR_FUNC  LST_PUNTOSP

                //| ID_VAR_FUNC  LST_CORCHETES_VAL // | LST_PUNTOSP //
                | tEste  sPunto  valId
                | valId
                | tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent
                | valId  sAbreParent  LST_VAL  sCierraParent

                //para hacer uso de corchetes
                | tEste  sPunto  valId  LST_CORCHETES_VAL
                | valId  LST_CORCHETES_VAL
                | tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
                | valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL;


            LST_PUNTOSP :  sPunto  valId
                | sPunto  valId  sAbreParent  LST_VAL  sCierraParent

                //Corchetes
                | sPunto  valId  LST_CORCHETES_VAL
                | sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL;



            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Asignar valor
            |-------------------------------------------------------------------------------------------------------------------
            | Hay que validar que reciba un id, y no un idFUNC
            */



            ASIG_VALOR :  ID_VAR_FUNC  VAL
                | ID_VAR_FUNC  sMas  sMas
                | ID_VAR_FUNC  sMenos  sMenos
                // | ID_VAR_FUNC  LST_CORCHETES_VAL  VAL
                ;
 
            /*

            USAR_METO_VAR :  USAR_VARIABLEP  USAR_METO_VAR
                | USAR_VARIABLE
                | USAR_METODO;

                //ASIGNAR_VALOR :  VAL
                //    | 
                ///    |  ;


                //#Usar variable
                //USAR_VARIABLE :  tEste  sPunto  USAR_VARIABLEP
                //    | USAR_VARIABLEP;

                USAR_VARIABLEP :  valId  sPunto
                    // | valId  LST_CORCHETES_VAL  sPunto
                    | valId  sAbreParent  LST_VAL  sCierraParent  sPunto
                    ;

                USAR_VARIABLE :  valId  VAL
                    | valId  sMas  sMas
                    | valId  sMenos  sMenos
                    | valId  LST_CORCHETES_VAL  VAL;

                USAR_METODO :  valId  sAbreParent  LST_VAL  sCierraParent;
            */
            //#------------------
            //# USAR  METODO

            /*
            USAR_METODO :  tEste  sPunto  USAR_METODOP
                | USAR_VARIABLEP;

            USAR_VARIABLEP :  valId  sPunto  USAR_VARIABLEP
                | valId  LST_CORCHETES_VAL  sPunto  USAR_VARIABLEP
                | valId  sAbreParent  LST_VAL  sCierraParent  sPunto  USAR_VARIABLEP
                | valId
                | valId  LST_CORCHETES_VAL;
            */ 

            //LLAMADA_FORMULARIO :  tNuevo  USAR_VARIABLEP; //aqui hay duda we

            //identificador



            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Cuerpo
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */


            //makestar
            LST_CUERPO :  LST_CUERPO CUERPO
            |CUERPO
            ;


            CUERPO :  DECLARAR_VARIABLE_SINVISIBI  sPuntoComa
                | ID_VAR_FUNC  sPuntoComa //hay que validar que sea un metodo y no una variables
                | ASIG_VALOR  sPuntoComa
 
                | FUNCIONES_NATIVAS  sPuntoComa
                | SENTENCIAS
                | SUPER

                //| USAR_METODO
                | ROMPER
                | CONTINUAR
                | RETORNO
                | ESCRIBIR_ARCHIVO
                //| PROCEDIMIENTOS_FORMULARIO
                //| FUNC_MULTIMEDIA
                | FUNC_MULTIMEDIA  sPuntoComa
                | LLAMADA_FORMULARIO
                |{/*Vacio*/};



            LLAMADA_FORMULARIO :  tNuevo  valId  sAbreParent  LST_VAL  sCierraParent  sPunto  tPagina  sPuntoComa
                | tNuevo  valId  sAbreParent  LST_VAL  sCierraParent  sPunto  tTodo  sPuntoComa
                | tNuevo  valId  sAbreParent  LST_VAL  sCierraParent  sPunto  tCuadriculo  sPuntoComa;


            /*
            |-------------------------------------------------------------------------------------------------------------------
            | MULTIMEDIA
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            FUNC_MULTIMEDIA :  AUDIO
                | VIDEO
                | IMAGEN
                ;


            AUDIO :  tAudio  sAbreParent  E  sComa  E  sCierraParent;

            VIDEO :  tVideo  sAbreParent  E  sComa  E  sCierraParent;

            IMAGEN :  tImagen  sAbreParent  E  sComa  E  sCierraParent;
             
            /*
            |-------------------------------------------------------------------------------------------------------------------
            | SUPER
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            SUPER :  tSuper  sAbreParent  LST_VAL  sCierraParent  sPuntoComa;

            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Sentencias de cotrol
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            RETORNO :  tRetorno  sPuntoComa
                | tRetorno  VALOR  sPuntoComa;

            ROMPER :  tRomper  sPuntoComa;

            CONTINUAR :  tContinuar  sPuntoComa;
            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Sentencias 
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            SENTENCIAS :  SI
                // | SI_SIMPLIFICADO
                | CASO

                //CICLOS
                | WHILE
                | FOR
                | DOWHILE
                | REPETIR;

            /*
            ------------------------------------------
            * SI 
            ------------------------------------------
            *  
            */


            SI :  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                | tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO_SI
                | tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO;

            SINO_SI :  tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO_SI
               | tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
               | tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO;

            SINO :  tSino  sAbreLlave  LST_CUERPO  sCierraLlave;

            /*
            ------------------------------------------
            * SI SIMPLIFICADO
            ------------------------------------------
            */

            SI_SIMPLIFICADO :  VALOR  sCierraInterrogante  E  sDosPuntos  E;

            /*
            ------------------------------------------
            * CASE
            ------------------------------------------
            */

            CASO :  tCaso  sAbreParent  E  sCierraParent  tDe  sAbreLlave  CUERPO_CASE  sCierraLlave;

            CUERPO_CASE :  E  sDosPuntos  sAbreLlave  LST_CUERPO  sCierraLlave  CUERPO_CASE
                   | E  sDosPuntos  sAbreLlave  LST_CUERPO  sCierraLlave
                   | tDefecto  sDosPuntos  sAbreLlave  LST_CUERPO  sCierraLlave;


            /*
            |-------------------------------------------------------------------------------------------------------------------
            | BUCLES 
            |-------------------------------------------------------------------------------------------------------------------
            |  

            
            /*
            ------------------------------------------
            * WHILE
            ------------------------------------------
           */

            WHILE :  tMientras  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave;


            /*
            ------------------------------------------
            * FOR
            ------------------------------------------
            */

            FOR :  tPara  sAbreParent  DECLARAR_VARIABLE_SINVISIBI  sPuntoComa  E  sPuntoComa  ASIG_VALOR  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                | tPara  sAbreParent  ASIG_VALOR  sPuntoComa  E  sPuntoComa  ASIG_VALOR  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave;



            /*
            ------------------------------------------
            * DOWHILE
            ------------------------------------------
            */

            DOWHILE :  tHacer  sAbreLlave  LST_CUERPO  sCierraLlave  tMientras  sAbreParent  E  sCierraParent  sPuntoComa;


            /*
            ------------------------------------------
            * DOWHILE
            ------------------------------------------
            */

            REPETIR :  tRepetir  sAbreLlave  LST_CUERPO  sCierraLlave  tHasta  sAbreParent  E  sCierraParent  sPuntoComa;

            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Funciones Nativas
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */


            FUNCIONES_NATIVAS :  IMPRIMIR
                | MENSAJE
                ;

            IMPRIMIR :  tImprimir  sAbreParent  VALOR  sCierraParent
                | tImprimir  sAbreParent  sCierraParent;

            MENSAJE :  tMensaje  sAbreParent  E  sCierraParent
                | tMensaje  sAbreParent  sCierraParent;


            /*
            ------------------------------------------
            * Internas del lenguaje
            ------------------------------------------
            */


            PREGUNTA_NATIVA :  tNativo  valId  sAbreParent  LST_VAL  sCierraParent;


            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Funciones ope Tipo
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */


            OPE_TIPO :  TO_CADENA
                    | SUB_CAD
                    | POS_CAD
                    | TO_BOOLEAN
                    | TO_ENTERO
                    | HOY
                    | AHORA
                    | TO_FECHA
                    | TO_HORA
                    | TO_FECHAHORA
                    | TAM
                    | RANDOM
                    | MIN
                    | MAX;

            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Funciones Cadena
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */


            /*
            ------------------------------------------
            * CADENA
            ------------------------------------------
            */


            TO_CADENA :  tCadena  sAbreParent  E  sCierraParent;

            SUB_CAD :  tSubCad  sAbreParent  E  sComa  E  sComa  E  sCierraParent;

            POS_CAD :  tPosCad  sAbreParent  E  sComa  E  sCierraParent;

            /*
            ------------------------------------------
            * Booleana
            ------------------------------------------
            */


            TO_BOOLEAN :  tBooleano  sAbreParent  E  sCierraParent;


            /*
            ------------------------------------------
            * Entera
            ------------------------------------------
            */


            TO_ENTERO :  tEntero  sAbreParent  E  sCierraParent;


            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Funciones Date
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */


            /*
            ------------------------------------------
            * Hoy  
            ------------------------------------------
            * Retorno: fecha
            */


            HOY :  tHoy  sAbreParent  sCierraParent;


            /*
            ------------------------------------------
            * Ahora
            ------------------------------------------
            * Retorno: fechaHora
            */


            AHORA :  tAhora  sAbreParent  sCierraParent;

            /*
           ------------------------------------------
           * To Fecha
           ------------------------------------------
           * Retorno: fecha
           */

            TO_FECHA :  tFecha  sAbreParent  E  sCierraParent;

            /*
           ------------------------------------------
           * To Hora
           ------------------------------------------
           * Retorno: hora
           */


            TO_HORA :  tHora  sAbreParent  E  sCierraParent;


            /*
           ------------------------------------------
           * To FechaHora
           ------------------------------------------
           * Retorno: hora
           */

            TO_FECHAHORA :  tFechaHora  sAbreParent  E  sCierraParent;



            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Otras Funciones
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            /*
            ------------------------------------------
            * OBjeto
            ------------------------------------------
            * retorno:entero
            */


            TAM :  tTam  sAbreParent  E  sCierraParent;



            /*
            ------------------------------------------
            * Random
            ------------------------------------------
            *retorno:entero/decimal/cadena
            */
            RANDOM :  tRandom  sAbreParent  LST_VAL  sCierraParent;
            //| tRandom  sAbreParent  sCierraParent;

            /*
            ------------------------------------------
            * Minimo
            ------------------------------------------
            *retorno:entero/decimal
            */
            MIN :  tMin  sAbreParent  LST_VAL  sCierraParent;


            /*
            ------------------------------------------
            * Maximo
            ------------------------------------------
            *retorno:entero/decimal
            */
            MAX :  tMax  sAbreParent  LST_VAL  sCierraParent;


            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Operaciones matematicas
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */

            OPE_ARITME :  POTENCIA
                    | LOGARITMO
                    | LOGARITMO10
                    | ABSOLUTO
                    | SENO
                    | COSENO
                    | TANGENTE
                    | RAIZ
                    | PI;


            /*
            ------------------------------------------
            * POTENCIA
            ------------------------------------------
            * Retorno:decimal
            */

            POTENCIA :  tPow  sAbreParent  E  sComa  E  sCierraParent;

            /*
            ------------------------------------------
            * LOGARITMO
            ------------------------------------------
            * Retorno:decimal
            */

            LOGARITMO :  tLog  sAbreParent  E  sCierraParent;

            /*
            ------------------------------------------
            * LOGARITMO10
            ------------------------------------------
            * Retorno:decimal
            */

            LOGARITMO10 :  tLog10  sAbreParent  E  sCierraParent;
            /*
            ------------------------------------------
            * ABSOLUTO
            ------------------------------------------
            * Retorno:decimal/enter
            */

            ABSOLUTO :  tAbs  sAbreParent  E  sCierraParent;

            /*
            ------------------------------------------
            * TRIGONOMETRICAS
            ------------------------------------------
            * Retorno:decimal
            */

            SENO :  tSeno  sAbreParent  E  sCierraParent;

            COSENO :  tCoseno  sAbreParent  E  sCierraParent;

            TANGENTE :  tTangente  sAbreParent  E  sCierraParent;

            /*
            ------------------------------------------
            * RAIZ
            ------------------------------------------
            * Retorno:decimal
            */
            RAIZ :  tSqrt  sAbreParent  E  sCierraParent;


            /*
            ------------------------------------------
            * PI
            ------------------------------------------
            * Retorno:decimal
            */
            PI :  tPi  sAbreParent  sCierraParent;
  



            /*
            |-------------------------------------------------------------------------------------------------------------------
            | Valor
            |-------------------------------------------------------------------------------------------------------------------
            |  
            */



            VALOR :  tNuevo  valId  sAbreParent  LST_VAL  sCierraParent //aqui tengo que reconocer el-> nuevo opciones()
                | tNuevo  TIPO  LST_CORCHETES_VAL
                | LST_LLAVES_VAL
                //| tNulo
                | PREGUNTA_NATIVA
                | tEste   //para el this solamente
                | E;




            E : 
                sMenos  E
                //Aritemeticas
                | E  sPot  E
                | E  sDiv  E
                | E  sPor  E
                | E  sMas  E
                | E  sMenos  E
                | E  sMod  E

                //Relacional

                | E  sIgualacion  E
                | E  sDiferenciacion  E
                | E  sMenorQue  E
                | E  sMenorIgualQue  E
                | E  sMayorQue  E
                | E  sMayorIgualQue  E

                //logicos

                | E  sAnd  E
                | E  sOr  E
                | sNot  E



                | sAbreParent  E  sCierraParent

                | ID_VAR_FUNC  //validar que si viene func() tiene que retornar algo obligatoriamente prro
                | valBoolean
                | valCadena
                | valCadena2
                | valCaracter
                | valDecimal
                | valNumero
                | tNulo
                | tNada
                | SI_SIMPLIFICADO
                | OPE_ARITME
                | OPE_TIPO
                | LEN;

            LEN :  tLen  sAbreParent  E  sCierraParent;
