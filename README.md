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
    
    
     