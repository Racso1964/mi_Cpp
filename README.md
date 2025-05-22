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
    
    
     