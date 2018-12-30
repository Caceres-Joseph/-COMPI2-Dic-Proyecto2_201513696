\{([^\}]+|\n)\}

S:                      
        LST_IMPORT  LST_CLASE
                
        |LST_CLASE
                
        ;
 
LST_IMPORT:            
        LST_IMPORT IMPORT
                
        |IMPORT
                
        ;

IMPORT:                
        tImport  sAbreParent  valId  sPunto  valId  sCierraParent  sPuntoComa
                
        ;

LST_CLASE:              
        LST_CLASE CLASE
                
        |CLASE
                
        ;


CLASE:                  
        tClase  valId  EXTENDER  sAbreLlave  CP_CLASE  sCierraLlave
                
        |tClase  valId  VISIBILIDAD  EXTENDER  sAbreLlave  CP_CLASE  sCierraLlave
                
        ;



TIPO:                   
        tEntero
                
        |tCaracter
                
        |tBooleano
                
        |tDecimal 
                
        |valId 
                
        |tVacio 
                
        ;

EXTENDER:              
        tPadre  valId
                
        |
                
        
        ;     

LST_PARAMETROS:  
        LST_PARAMETROS sComa PARAMETRO
                
        |PARAMETRO
                
        |
                
        ;

PARAMETRO:  
        TIPO  VAR_ARREGLO
                
        ;


LST_VAL:  
        LST_VAL sComa VALOR
                
        |VALOR
                
        |
                

        ;

VISIBILIDAD:            
        tPublico
                
        |tPrivado
                
        |tProtegido
                
        ;                              

  
CP_CLASE:              
        CP_CLASE CUERPO_CLASE
                
        |CUERPO_CLASE
                
        ;


 CUERPO_CLASE:  
        CONSTRUCTOR
                
        | DECLARAR_VARIABLE_GLOBAL  sPuntoComa
                
        | METODO
                
        | MAIN
                
        ;


METODO:  
        VISIBILIDAD  TIPO  VAR_ARREGLO  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                
        | TIPO  VAR_ARREGLO  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                
        ;
 

MAIN:  
        tPrincipal  sAbreParent  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                
        ;

CONSTRUCTOR:  
        valId  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                
        ;



DECLARAR_VARIABLE_GLOBAL:  
        TIPO  VISIBILIDAD  VAR_ARREGLO  VAL
                
        | TIPO  VISIBILIDAD  VAR_ARREGLO  
                
        | DECLARAR_VARIABLE_SINVISIBI
                
        ;



DECLARAR_VARIABLE_SINVISIBI:  
        TIPO  VAR_ARREGLO  VAL
                
        | TIPO  VAR_ARREGLO
                
        ;



VAL:  
        sIgual  VALOR
                
        ;


LST_LLAVES_VAL:  
        LST_LLAVES_VAL sComa LLAVES_VAL_P
                
        |LLAVES_VAL_P
                
        ;


LLAVES_VAL_P:  
        sAbreLlave  LST_LLAVES_VAL  sCierraLlave
                
        |sAbreLlave  LST_VAL  sCierraLlave
                
        ;



VAR_ARREGLO:  
        valId
                
        |valId  PAR_CORCHETES_VAL
                
        ;

LST_CORCHETES:  
        LST_CORCHETES PAR_CORCHETES_VACIOS
                
        |PAR_CORCHETES_VACIOS
                
        ;

PAR_CORCHETES_VACIOS:  
        sAbreCorchete  sCierraCorchete
                
        ;

PAR_CORCHETES_VAL:  
        sAbreCorchete  E  sCierraCorchete
                
        ;

LST_CORCHETES_VAL:  
        LST_CORCHETES_VAL  PAR_CORCHETES_VAL
                
        |PAR_CORCHETES_VAL
                
        ;


ID_VAR_FUNC:  
        ID_VAR_FUNC  LST_PUNTOSP 
                
        | tEste  sPunto  valId
                
        | valId
                
        | tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent
                
        | valId  sAbreParent  LST_VAL  sCierraParent 
                
        | tEste  sPunto  valId  LST_CORCHETES_VAL
                
        | valId  LST_CORCHETES_VAL
                
        | tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
                
        | valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
                
        ;


LST_PUNTOSP:  
        sPunto  valId
                
        | sPunto  valId  sAbreParent  LST_VAL  sCierraParent
                

        | sPunto  valId  LST_CORCHETES_VAL
                
        | sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
                
        ;



ASIG_VALOR:  
        ID_VAR_FUNC  VAL
                
        | ID_VAR_FUNC  sMas  sMas
                
        | ID_VAR_FUNC  sMenos  sMenos
                
        ;

LST_CUERPO:  
        LST_CUERPO CUERPO
                
        |CUERPO
                
                
        ;
 

CUERPO:  
        DECLARAR_VARIABLE_SINVISIBI  sPuntoComa
                
        | ID_VAR_FUNC  sPuntoComa  
                
        | ASIG_VALOR  sPuntoComa
                

        //| FUNCIONES_NATIVAS  sPuntoComa
        | SENTENCIAS
                
        | SUPER
                
 
        | ROMPER
                
        | CONTINUAR
                
        | RETORNO 
                 
        ;

SUPER:  
        tSuper  sAbreParent  LST_VAL  sCierraParent  sPuntoComa
                
        ;

RETORNO:  
        tRetorno  sPuntoComa
                
        | tRetorno  VALOR  sPuntoComa
                
        ;

ROMPER:  
        tRomper  sPuntoComa
                
        ;

CONTINUAR:  
        tContinuar  sPuntoComa
                
        ;


SENTENCIAS:  
        SI
                
        //| CASO
        //| WHILE
        //| FOR
        //| DOWHILE
        //| REPETIR
        ;

SI:  
        tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                
        | tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO_SI
                
        | tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO
                
        ;

SINO_SI:  
        tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO_SI
                
        | tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                
        | tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO
                
        ;

SINO:  
        tSino  sAbreLlave  LST_CUERPO  sCierraLlave
                
        ;

 
VALOR:  
        tNuevo  valId  sAbreParent  LST_VAL  sCierraParent  
                
        | tNuevo  TIPO  LST_CORCHETES_VAL
                
        | LST_LLAVES_VAL  
                
        | E
                
        ;



E: 
        sMenos  E
                
        
        | E  sPot  E
                
        | E  sDiv  E
                
        | E  sPor  E
                
        | E  sMas  E
                
        | E  sMenos  E
                
         
        | E  sMod  E
                
 

        
        | E  sIgualacion  E
                
        | E  sDiferenciacion  E
                
        | E  sMenorQue  E
                
        | E  sMenorIgualQue  E
                
        | E  sMayorQue  E
                
        | E  sMayorIgualQue  E
                
 
        
        | E  sAnd  E
                
        | E  sOr  E
                
        | sNot  E
                
         

        | sAbreParent  E  sCierraParent
                
        
        | ID_VAR_FUNC 
                  
        | valBoolean
                
        | valCadena 
                
        | valCaracter
                
        | valDecimal
                
                
        | valNumero
                
        | tNulo
                
        | tNada
                
        //| SI_SIMPLIFICADO
        //| OPE_ARITME
        //| OPE_TIPO
        //| LEN
        ;