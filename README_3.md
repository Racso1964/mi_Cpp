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


    FORMA DE INVOCAR O LLAMAR UNA FUNCIÓN.
    ⒈   Nombre_función()
    ⒉   Nombre_función(a, b)
    ⒊   resultado = Nombre_función(a, b)



    (CASO ⒈)
    Dependiendo de cómo se halla declarado la función desde un principio, debemos de tener mucho cuidado a la hora de invocar la funcion de manera que coincida con el encabezado. Es decir, cuando la función es del tipo (CASO ⒈)  de una funcion que no recibe argumentos y que tampoco devuelve argumentos, entonces usamos la primera forma
    ⒈ nombre_función()
     donde solamente vamos a colocar el nombre de la función, abrimos y cerramos parentesis y listo.

    (CASO ⒉) Sí tenemos el caso de uuna función que recibe argumentos pero que no devuelve ningún dato o ningún valor entonces usamos el  (CASO ⒉)
    ⒉ nombre_función(a, b)
    es decir colocamos el nombre de la función y dentro del parentesis le mandamos los datos.

    (CASO ⒊) Sabiendo que esta función va a devolver un valor, debemos de tener una variable en donde vamos a guardar el resultado que va a devolver la función. Porlotanto, se coloca una variable llamad "resultado" igual a el nombre de la función "nombre_función(a, b)" y dentro de parentesis los datosmo las variables que se le está enviando a dicha función.

    NOTA: las declaración de funciones deben colocarse lineas arriba antes de la función "main".


ORDENAR VECTORES MÉTODO DE LA BURBUJA.
 
Dado un vector:
   ↠ 5      
     20
     3
     8
     15
     9
     10
     2

Se requiere u ciclo for con un iterador "i" que se mueva desde la posición cero para poder rrecorrer todos los elementos del arreglo.

Posteriormente se va a seleccionar de 2 en 2 es decir; lo que tiene la posición actual del índice "i" se compara con lo que hay en la posición siguiente.

    ¿cinco es mayor que 20? no
   ↠5        Entonces no pasa nada.Aumenta en 1 el valor         5
     20       i del Índice iterador y se mueve a la siguiente    ↠20
     3        posición.                                           3
     8                                                            8
     15                                                           15
     9                                                            9
     10                                                           10
     2                                                            2

    ¿veinte es mayor que 3? si --> "i" va a la posición siguiente
      5                        y se intercambian los valores      5
    ↠20                                                          3     
      3                                                         ↠20
      8                                                           8
      15                                                          15
      9                                                           9
      10                                                          10
      2                                                           2 

    ¿20 es mayor que 8? si --> "i" va a la posición siguiente
                                y se intercambian los valores
      5
      3
    ↠20
      8
      15
      9
      10
      2

     ¿20 es mayor que 15? si --> "i" va a la posición siguiente
                                y se intercambian los valores
      5
      3
      8
    ↠20
      15
      9
      10
      2

    ¿20 es mayor que 9? si --> "i" va a la posición siguiente
                                y se intercambian los valores
      5
      3
      8
      15
    ↠20
      9
      10
      2
    
       ¿20 es mayor que 10? si --> "i" va a la posición siguiente
                                y se intercambian los valores
      5
      3
      8
      15
      9
    ↠20
      10
      2

       ¿20 es mayor que 2? si --> "i" va a la posición siguiente
                                y se intercambian los valores
      5
      3
      8
      15
      9
      10
    ↠20
      2


       ¿20 es mayor que 10? si --> "i" va a la posición siguiente
                                y se intercambian los valores
      5
      3
      8
      15
      9
      10
      2
      20

      Ese sería el ultimo valor que toma "i" puesto que el ciclo se va a repetir n veces menos uno queriendo decir que el ciclo se detiene un lugar antes de la posición final del vector.

      Aquí nos damos cuenta que el 20 estando en la segunda posición y siendo el valor mayor cumplió con todas las preguntas y se posicionó al final del vector; sinembargo éste aún no no está ordenado correctamente; entonces tenemos que repetir el procedimiento  osea el recorrido de todo el arreglo e ir comparando de dos endos en una segunda ronda.




      

      













    5
    3
    20
    8
    15
    9
    10
    2







