FUNCIONES EN C++
Cuando estamos programando y nos damos cuenta que necesitamos realizar una misma tarea varias veces; lo más común es utilizar un cilo. Sinembargo, los ciclos van a repetir una instrucción un determinado número de veces o mientras se cumpla una condición.

La diferencia con una función radica en que la función s una sección de código o un bloque de instrucciones que se encuentra dentro del programa pero que no se ejecuta hasta tanto sea invocado.

Porlotanto sí necesito realizar una acción o necesito realizar una operación en diferentes partes del programa lo más conveniente es utilizar la función e invocarla exclusivamente cuando sea necesario.

FORMA DE DECLARAR E INVOCAR FUNCION.
Cuando se trata de funciones, lo dividiremos en 2 partes:
- Declaración de la función.
- Invocación de la función.

DELARACIÓN DE UNA FUNCION.
Como cualquier variable, primero tiene que ser declarada antes de ser utilizada; de lo contrario el procesador nos marca un error.
Para poder declarar una función primero se debe colocar la línea de encabezado.

  ┌────────────────────────────────────┐ 
  │   Linea de encabezado de funcion   │    {encabezado de función
  └────────────────────────────────────┘
  ┌────────────────────────────────────┐
  │ {                                  │            
  │ Declaracion de constante variables │   {cuerpo de función
  │ y cualquier otra instruccion de C++│
  │  }                                 │
  └────────────────────────────────────┘

  Luego se abre llaves y dentro de estas llaves debe ir el cuerpo de la función.

  Dentro del cuerpo de la función se puede hacer declaración de variables, colocar allí toda la línea d código de la que se quiere se ejecute por dicha función y tambien si esta función va a devolver algún valor o alguna variable, tambien tiene que ir allí, antes de cerrar las llaves.

  DECLARACIÓN DE LA LÍNEA DE ENCABEZADO DE LA FUNCIÓN.
  ┌──────────────────────────────────────────────────────────────────────┐ 
  │   Linea-de-encabezado-de-funcion  (datos transmitidos a la función)  │    
  └──────────────────────────────────────────────────────────────────────┘
        esto identifica la                 esto transmite datos
        función llamada                     a la función



    ⒈ void nombre_función()
    ⒉ void nombre_función(int x, int y)
    ⒊ int nombre_función(int x, int y)

    -. Se debe especificar cómo se llama la función.
    -. Qué tipo de datos va a regresar la función.
    -. Qué argumentos o cuales datos nececita para llevar a cabo sus líneas de código.

    Para todo esto tenemos 3 opciones posibles:

        ⒈ void nombre_función()
        La primera opción es una función que no devuelve nada y se le debe colocar "void" que significa vacio; seguido de el nombre de la función e inmediatamente sin espacio abrir parentesis el cual se deja vacío. Este es el encabezado de la función para luego aabrir la llave donde se escribirá el cuerpo de dicha funcion antes de cerrar llave.

        Este tipo de funciones, es decir el caso Nª1 normalmente se utiliza cuando no queremos mezclar en el código todo aquello que conlleva portadas, imprresiones de texto, impresiones de marcos, limpieza de pantalla, cambio de color y todo aquello que tiene que ver más con la estética del programa.

        La función no devuelve nada y tampoco recibe argumento per
        si lleva a cabo un encomendado.


        ⒉ void nombre_función(int x, int y)
        En este caso la función si recibe argumentos, es decir, recibe datos que va a necesitar para ejecutar sus instrucciones pero no devuelve nada.  Porlotanto su encabezado tendrá que ir de la forma Nª2 es decir "void" que no va a devolver nada, espacio, nombre que lleva la función y dentro de parentesis el tipo de dato y el nombre de la variable que va a estar recibiendo.  Sí la función recibe varios datos, cada uno de los datos, tiene que indicar quétipo de dato va a ser, qué nombre  e ir separados por coma.

        En este caso, como ejemplo, se puso que la función recibe a un dato entero llamado "x" y un dato entero llamado "y". Esta función no regresa dato alguno.


        ⒊ int nombre_función(int x, int y)
        Caso Nª3 es el más común. En este tipo de caso la función si recibe argumentos, esdecir, recive datos para trabajar y además regresa un dato que conocemos como dato resultado.

        En este caso tenemos que colocar primero el tipo de dato de la variable que va a regresar; sí es una función que va a regresar un tipo de dato doble o float, entoncesdebemos de colocar doble o float antes del nombre de la función. Sí fuese que va a regresar una letra, entonces debemos de colocar "char" Espor eso que alli debe ir el tipo de dato de la variable q va a recibir lo que regresa la función; seguido de un espacio, seguiedo del nobre de la función e inmediatamente dentro de parentesis, nuevamente los datos que recibe la función.

        Los datos que recibe la función por lo general se le conoce como argumento de la función.


    Entonces esta es la forma de declarar los encabezados y obviamente después de esto viene la llave y colocamos allí todas las líneas de código que queremos que se ejecuten.

    Ya teniendo declaradala función en la partede arriba; estas líneas de código no se van a ejecutar a menos que las invoquemos en algún lado.

    Hay q destacar que en el programa siempre va a existir una función principal que es la que se conoce como "int main()" la cual es la función principal que en algun momento va a invocar o llamar a las demás funciones que se puedan construir o declarar.
