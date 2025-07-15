# Hola mundo !!

El comando para deplegar texto por pantalla "cout" va acompañado  de dos cabezas de fleca apuntando a la izquierda "<<" llamado símbolo de incersón

Luego de cerrar con comillas y sí queremos un salto de línea, escribimos "<< endl"

Separando el mensaje con un nuevo símbolo de inserción "<<" y seguido la operación matemática o valor numérico sin comillas:
cout<<"La suma de 5 + 5 es: <<5+5"

Se ejecuata las lineas anteriores en una sola con la ayuda de la secuencia de escape barra invertida + n

Se agrega secuencia de escape para tabular \t

Para comentar un bloque de líneas utilza /* y cierra el bloque con */


TIPOS DE DATOS Y DIFERENCIAENTRE CADA UNO DE ELLOS EN C++:
    -Datos Integrado (proporcionados por el compilador).
    -Datos Tipo Clase (creados por el programador).

    DATOS NUMÉRICO. (Entero y Punto Flotante)
        Entero: Char(caracreres)    Bool(boleanos)    Int(enteros)
        Flotante: Float     Double

    COMO ALMACENA LOS DATOS UNA COMPUTADURA:
        BIT Es un dígito del Sistema de Numeració Binario y representa la unidad mínima de información. BIT ----> 0 Ó 1

        Sí tubiera 5 BITs puedo aplicar una formula y calcular las combinacioes posibles:
                            2^n donde "n" es la cantidd de BITs
                            2^5 = 32 combinaciones entre (0 y 31)

                            2^n-1 = Número Máximo = 31

        BYTE = 8 BITs
        2^8 = 256 combinaciones entre (0 y 255)


    EN EL CASO DE TENER CINCO BITS IMPLICA 32 COMBINACIONES Y ME INDICA QUE PUEDO TRABAJAR CON NÚMEROS ENTRE CERO (0) Y (31)

    _________________________
     2^4 |2^3 | 2^2| 2^1| 2^0|
      1  |  1 |  1 | 1  | 1  |

    (2^4 *1)+(2^3*1)+(2^2*1)+(2^1*1)+(2^0*1)
        16  +   8   +   4   +   2   +   1   = 31

    CAA VEZ QUE TENEMOS OCHO BITS, ESTOS SE AGRUPAN EN UN NUEVO TÉRMINO LLAMADO "BYTE"

    UN BYTE U OCTETO (B) ES LA UNIDAD DE INFORMACIÓN DE BASE UTILIZADA EN COMPUTACIÓN Y EN TELECOMUNICACIONES. Y COMPRENDE UN CONJUNTO DE OCHO BITS

    ENTONCES, EN UN BYTE PUEDO INTRODUCIR VALORES QUE VAN DESDE CERO (0) A (255) Y ES BÁSICAMENTE COMO LA EN LA COMPUTADORA SE TRABAJA Y AGRUPAN LOS DATOS.

    HAY QUE HACER LA ACLARATORIA QUE ESOS 255 VALORES SE CONSIDERAN CON SIGNO POSITIVO. SIN EMBARGO SABEMOS QUE EN LA VIDA REALTANBIEN EXISTE LOS VALORES NEGATIVOS.

    ENTONCES LO QUE SE HACE ES QUE LA CANTIDAD DE VALORES POSIBLES (para este caso 256) SE DIVIDE ENTRE DOS DE MANERA QUE EXISTA UNA PARTE PARA LOS VALORES POSITIVOS Y OTRA PARTE SIMÉTRICA PARA LOS VALORES NEGATIVOS.

    ENTONCES EN LUGAR DE QUE EN UN BYTE QUEPAN VALORES DEL CERO A DOSCIENTOS CINCUENTAYCINCO, EN REALIDAD CABEN DESDE EL -128 QUE ES LA MITAD DE 256 HASTA EL 127.

    ¿POR QUÉ HASTA EL 127?
    - PORQUE PASA POR EL CERO Y EL CERO CUENTA COMO UN NÚMERO.

    ENTONCES EN UN BYTE PUEDE CABER VALORES POSITIVOS TODOS DEL 0 A 255 SIN SIGNO 

    O VALORES CO SIGNO QUE VAN DESDE EL -128 HASTA EL +127



    ASÍ SE ALMACENAN LOS DATOS EN UNA COMPUTADORA:
    Tamaño  Combinaciones   Valor Mínimo    Valor Máximo
    1 BYTE   2^8=256            -128            127
    2 BYTE   2^16=65536         -32768          32767
    4 BYTE   2^32=4294967296    -2147483648     2147483647     


    ASÍ ES COMO ESTÁ ESTRUCTURADA LA MEMORIA INTERNA DE LA COMPUTADORA.

    Con el análisis de esta tabla más o menos queda claro el porqué es importante entender cuál es el valor mínimo y máximo que podemos almacenar en un Byte. Hay que tener en cuenta que es importante saber de antemanocuál es el espacio de almacenamiento que se necesita deacuerdo al valor de los datos de trabajo. Sí el caso fuera el 100 obviamente que con 1 Byte alcanza porque en un Byte puede caber valores entre -128 a 127; pero si fuece el número 1000, yano cabe en un byte; se necesitaría dos Byte pués tienen un rango de -32768 a 32767 y porsupuesto aarca al número 1000.

    Si fuese el caso de trabajar con el número 100 mil  y lo quiero sumar con        cien; el primero no cabe en 2 Byte, necesito 4 Byte.

    Por esta razón lo primero que tenemos que tomar en cuenta es saer qué tipo de datos se está trabajando y  más o menos saber el rango de posible recorrido de esos valores para que así desde un principio sepamos cuanto espacio de almacenamiento vamos a necesitar.

    Estos detalles son importante para así prevenir errores de lógica a medida que el programa va escalando.

    Imaginemos la memoria RAM o Disco duro con el siguiente cuadro:
    __________.
    │        │.
    __________
    │        │Localidad de memoria de un Byte.
    __________
    │        │.
    __________
    │        │.

Y cada localidad de memoria está seccionada con una capacidad de almacenamiento para un Byte (8 bits).

Sabemos en la practica que podemos guardar cualquie número; pero en la memoria los espacios de localidades de almacenamiento estan configurados con una capacidad de un Byte.

En caso de querer trabajar un número mucho más grande se debe decidir el tipo de dato a implementar y es donde entra a figurar el concepto de tipos de dato computacional ( CHAR, BOOL Y INT).

Char. Reserva un Byte de localidad de memoria.
Bool. Reserva un Byte de localidad de memoria.
Int. Reserva cuatro Byte  de localidad de memoria.

CHAR almacena caracteres individuales.
    -Mayúsculas y minúsculas.
    -Números del cero al nueve.
    -Símbolos especiales ($,#,-,!).
    -Letras.

No tanto para números pués para ello existe el tipo de dato Int, pero dentro delos caracteresque almacena abviamente hay una diferencia entre los que son caracteres en mayúsculas o minúscula; también puede almacenar números que van del cero al nueve al igual que cuales quiera de los simbolos del teclado y obviamente todas las letras mayusc. o minusc.

Cuando se va a trabajar con un caracter, se 
tiene que colocar entre comillas simple para poder diferenciarlo de un valor nuérico como: '1' como caracter y 1 como valor numérico.

Sí se coloca un número entre cero y nueve dentro de comillas simple; el compilador va a entender que se está tomando como un caracter y no como un número.

Ejemplo de caracrer q pueden alojarse en una localidad de memoria Char:
'A', '3', '#', '$', 'b', ';' '-', 'Y'.

Ya sabemos que el Char es de un BYTE.
¿Cómo entender la tabla ASCII Code de 256 combinaciones?

La tabla ASCII o código ASCII es un acrónimo que corresponde a la expresión inglesa American Standard Code for Information Interchange.

Este código funciona como un enlace entre el lenguaje de máquina (código inario) y la forma empleada por los seres humanos para designar instrucciones o ingresar texto en un computador.

La tabla ASCII ofrece todas las combinaciones posibles que pueden caber en una localidad de memoria "Char". Por ejemplo cualquier letra o símbolo del teclado tiene un valor numérico del Sistema Decimal, asignado a ese símbolo, letra o número.

veamos un extrcto:
        BYTE        Cod     Char
        00100000    65      A
        01000000    64      @

Con la combinación Alt + 64 aparece el símbolo @
Con la combinación Alt + 65 aparece el símbolo A

El Código ASCII es importante para comprender que el computador entiende es de números sin importar si en un Char se está representando una letra o un símbolo en epecial. Entonces a la hora de almacenar en memoria la computadora lo guarda como un número del Sistema Decimal, de tal manera que aunque se teclee la letra mayúscula (A),este noguarda esa a mayuscula en memoria sino el número DEC que le corresponde en la tabla ASCII.

De tal manera de entender que aunque el Char es para caracteres en realidad se clasifica como un tipo de dato numérico entero.

Veamos qué pasa cuando se escrie "Hola".

Recordando que char almacena caracteres individuales en la localidad respectiva.

'H' = 72    La (H) mayúscula le corresponde 72.
'o' = 111   La (o) minúscula le corresponde 111.
'l' = 108   La (l) minúscula le corresponde 108.
'a' = 97    La (a) minúscula le corresponde  97.

Entonces, aún tecleando una palabra en realidad lo que sucede internamente es apartar el número de localidades según el número de símbolos o letras contenidas en el enunciado u operación realizada.

Para el caso de "Hola", se reservan cuatro localidades de memoria de un BYTE cada una y no se almacena la letra o símbolo sino el número que corresponde a dicho dígito.

En caso que quisiera generar una cadena de caracteres y guardarse completa, es similar, se reservan 4 char  de memoria pero en vez de simbolos por separado como hasta ahora hemos visto se escribe la palabra completa entre comillas doble "Hola".

Para ello existe una extensión o derivacion de Char que se llama STRING, de manera de poder colocar la palabra completa en lugar de caracteres separados.

Entonces en lugar de 'H''o''l''a' escribo "Hola".

Para poder diferenciar un caracter Char de una palabra String. El String va con comillas doble mientras Char con comillas simple.

Entonces la combinacion de dato string ya existe dentro del compilador ya integrado

Veamos Tipo de dato Bool.
Bool = 1 Byte --->  verdadero  o  falso

OPERADOR RELACIONAL      SIGNIFICADO         EJEMPLO.
        <                menor que         edad < 30.
        >                mayor que         altura > 6.2.
        <=               menor o igual     gravable > 200.
        >=               mayor o igual     temp >= 98.6.
        ==               igual a           calificacion == 3.
        !=               diferente         numero != 250

Los datos tipo Bool ocupa tambien 1 Byte en memoria y tiene sólo dos combianciones posible True y False; tamien lo podemos tomar como si fuera un 1 o un cero (0).

El tipo de dato Bool es usado cuando tenemos operaciones lógicas que es esl caso cuando tenemos una pregunta la cual acepta como respuesta un (si) o un (no) o puede ser un verdadero(v) o un falso (f) o (1) o (0).

Datos tipo Int.
Int = 4 BYTESs --> VALOR ENTERO NUÉRICO

Un Int ocupa cuatro localidades de memoria, sabiendo que cada localidad vale un Byte.

   DATO Int ---> |BYTE |BYTE |BYTE|BYTE|.
   Allí se va a almacenar un valor entero numérico.

Int = 4 BYTES ---> 2^32 = 4294967296 cobinaciones posible.
Este número de combinaciones (cuatromil doscientas noventa y cuatro milones noveciento cesenta y siete mil doscientas noventayseis) se divide entre dos  y nos dá un rango con valores positivos y negativos:4 BYTE   2^32=4294967296    -2147483648     2147483647.

Entonces en un entero vamos a poder guardar valores entre -2147483648 y +2147483647 incluyendo el cero.

Una muy buena practica de programación y como método para optimizar el código del lenguajede programático es "RESERVAR ÚNICAMENTE EL ESPACIO DE MEMORIA QUE VAMOS A NECESITAR"

Y para ello nos es de suma importancia conocer los tipos de datos o variantes que se derivan de INT:

Short int           ocupa 2 BYTE.
unsigne short in    Sin signo ocupa 2 BYTE.

Int                 ocupa 4 BYTE.
unsigne int         Sin signo ocupa 4 BYTE.

Long int            ocupa 4 BYTE.
Unsigne long int    Sin signo ocupa 4 BYTE.


Uno de los más utilizados y conocidos es el Short int.
Sí ya sabemos que el int ocupa 4 Byte, entonces el "sort int" va a ocupar dos Byte. Obviament tenemos las dos combinaciones; sí se trabaja con signo entonces lo queme de el número de combinaciones se tiene que dividir entre dos. Pero sí lo voy a trabajar sin signo, es decir, quiero utilizarlo todo en la parte positiva entonces eiste el "unsigne short in" La palabra "unsigne"nque significa sin signo. Entonces en véz de utilizar todo el rango para valores positivos y negativos; utilizaremos todo el rango para valores positivos incluyendo el cero que es neutro, pero sigo teniendo los dos espacios de los 2 BYTE.

Respecto al "Int" ya sabemos que ocupa 4 Byte si se configura el dato como "Int" ya la computadora sabe que debe dividir entre dos y reservar una parte para valores positivos y la otra parte para valores negativos.

Pero si no quiero signo tambien puedo anteponer la palabra "unsigned"y va a ir como "unsigned int" que sería un int sin signo.

Ahora si quiero un número mucho más grande usaría la palabra"Long" que debería ser el doble de la capacidad de un "Int" pero enrealidad no es así continuaría con 4 Byts y el "Unsigne long int" sería sin signo.

VEAMOS LA TABLA:
_________________________________________________________
NOMBRE DEL          TAMAÑO DEL.
TIPO DE DATOS       ALMACENAMIENTO
                    EN (Bytes)          RANGO DE VALORES .
_________________________________________________________.
Char                    1                       256      .
Bool                    1                       1 - 0    .
Short int               2                -32768 a +32767 .
unsigne  Short int      2                  0 a 65535     .
Int                     4            -2147483648 a +2147483647.
Unsigned int            4                  0 a 4294967295 . 
Long int                4             -2147483648 a +2147483647 .
Unsigne long int        4                  0 a 4294967295 .

El tema de la capasidad de memoria reservada para la localidad "Long Int" que debería ser 8 BYTEs y la realidad es 4 BYTEs se explica remontandonos a los antiguos compiladores un Int no tenía 4 Bytes,antes en los primeros compiladores un entero (Int) cubría dos Bytes y de allí nace el término "Long int" que ocupaba 4 Bytes que es el doble de este dos Bytes; pero ya con los compiadores modernos ya los compiladores reservan 4 Bytes para un Int. Así que el long int se quedó con el cuatrocomo era antes y el Int actual igual tiene 4 Bytes.Aclarando que etos valores pueden cambiar dependiendo del IDE que esté utilizando.

Ya tenemos sistemas operativos de 32 Bytes y 64 Bytes: entonces por ejemplo en los sistemas operativos de 64 Bytes un "Long Int" ya ocupa 8 y hasta más Bytes.

VALOR NUMÉRICO DECIMAL
Datos Flotantes ejemplo: +10.625    5.  -6.2    0.0     0.33    +2.0 .

-Float = 4 Bytes.
-Double = 8 Bytes.
-Long Double = 8 Bytes.

En los valores nuéricos flotantes (valores decimales) se puede tener numeros negativos, cero, positivos y se suma el valor decimal. La diferencia es que en estos valores se denota el punto decimal.

Entonces dentro de estos existe el tipo de dato Float, que es el original,y es de 4 Bytes.

Cuando necesitamos un resultado  con mayor cantidad de decimales entonces podemos usar un tipo de dato "Double" que como su nombre lo indica es el doble del Float; si antes era  4 Bytes, con Float será 8 Bytes.

Siguiendo la lógica existe el "Long Double" de 8 Bytes pero en otra IDE u otro compilador pudiera tener más de ocho Bytes.

VEAMOS EN QUÉ AFECTA TENER CUATRO U OCHO BYTES PARA DATOS FLOTANTE.


TIPO    ALMACENAMIENTO      RANGO ABSOLUTO DE VALORES (+ y -).
____________________________________________________.
Float        4 Bytes         1.40129846432481707e-45.
.                           a.
.                           3.40282346638528860e+38.
____________________________________________________.
Double y.
long double   8 Bytes.
.                           a.
.                           1.79769313486231570e+308.
____________________________________________________.

Esto va a afectar directamente a la precisión del dato osea la cantidad de decimales que se pueden presentar después del punto.

Por ejemplo un tipo de dato "Float" ocupa 4 Bytes de almacenamiento en memoria y se va a poder representar valores hasta menos 45 decimales o hasta más de 38 decimales para valores positivos.

Y por ejemplo con un "double" y "long double" la presiciòn es exponencial hasta -324 y eponencial +308.

Entonces cuando tenemos una operación que esté creciendo eponencialmente puede que en algún momento digamos que ya un float no nos es suficiente por la cantidad de decimales que estamos generando; entonces aquí es donde se justifica el empleo de una variable tipo "double".

Si tenemos dda de cuanto espacio ocupa los tipos de datos del compilador que se está ocupando, podemos escribir una instrucción en el programa que estemos utilizando.

cout<<"El tamaño de un char es: "<<sizeof(char)<<endl;>>.
cout<<"El tamaño de un bool es: "<<sizeof(bool)<<endl;>>.
cout<<"El tamaño de un short int es: "<<sizeof(short int)<<endl;>>.
cout<<"El tamaño de un int es: "<<sizeof(int)<<endl;>>.
cout<<"El tamaño de un long int es: "<<sizeof(long int)<<endl;>>.
cout<<"El tamaño de un float es: "<<sizeof(float)<<endl;>>.
cout<<"El tamaño de un double es: "<<sizeof(double)<<endl;>>.

Esto nos va a decir directamente cual es el tamaño de espacio en  memoria que ocupa este tipo de dato. De esta manera nos podemos asegurar; pués hay algunos IDE que tienen un "long int" de 8 mientras otros tienen uno de 4.

(CASO ⒉) Sí tenemos el caso de uuna función que recibe argumentos pero que no devuelve ningún dato o ningún valor entonces usamos el  (CASO ⒉)
    ⒉ nombre_función(a, b)
    es decir colocamos el nombre de la función y dentro del parentesis le mandamos los datos.

    (CASO ⒊) Sabiendo que esta función va a devolver un valor, debemos de tener una variable en donde vamos a guardar el resultado que va a devolver la función. Porlotanto, se coloca una variable llamad "resultado" igual a el nombre de la función "nombre_función(a, b)" y dentro de parentesis los datosmo las variables que se le está enviando a dicha función.