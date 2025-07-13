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





