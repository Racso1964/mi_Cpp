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

      Aquí nos damos cuenta que el 20 estando en la segunda posición y siendo el valor mayor cumplió con todas las preguntas y se posicionó al final del vector; sinembargo éste aún no no está ordenado correctamente; entonces tenemos que repetir el procedimiento  osea el recorrido de todo el arreglo e ir comparando de dos endos en una 

    SEGUNDA RONDA.
    Volvemos a repetir ¿5 es menor que 3? si --> intercambio de posiciones el recorrido del vector se realizará todas las rondas que sea necesario, por ello hay que agregar un segundo índice para "j" que va desde cero hasta n-1.

    Se dice n-1 porque sí el arreglo es de ocho elementos y el valor más pequeño se encuentra en la ultima posición entonces se necesitaría subirlo siete posiciones para posicionarlo en la primera posición. entonces ese proceso lo haría el iterador "j" que va a hacerlo de cero a siete o lo mismo q n-1.

    Para realizar el intercambio de valore en este caso 5 y 3:

  ↠5  ¿cinco es mayor que tres? si --> intercambio
    3
    8
    15
    9
    10
    2
    20

    sí tomamos el 3 y lo colocamos donde esta el 5, el valor 5 se perde´ria de la memoria y tendríamos dos veces el 3 tanto en primera como segunda posición porlotanto necesitamos guardar ese valor d la primera posición el algun lado. usaremos una variable auxiliar.

    Aux=Arreglo[pos.Actual]

    Ahora podemos colocar el valor de Aux en la segunda posición.

    Arreglo[pos.Actual]= Arreglo[pos.siguiente]



    Acotando que la posición actual lo marca "i";

    Y ahora si, lo que hay en la posición siguiente, es decir, en la segunda posición, se cambia por el valor guardado en Aux.

     Arreglo[pos.siguiente]
      y de esta manera ya queda el intercambio realizado.
      3
      5
      8
      15
      9
      10
      2
      20


DETERMINAR EL TAMAÑO EXACTO DE UN VECTOR.
Nota: A veces no es posible determinar con facilidad el tamaño exacto de un vector, pero en C++ existen varias formas de determinar el tamaño de un array o vector fácilmente, aquí explicare un método. Cabe notar que este tamaño es el que ira como tope del ciclo for y sería equivalente a que nosotros mismos, en caso de saber el tamaño del vector, lo pongamos allí, sin embargo como veremos en otra sección no siempre es posible saber con certeza el tamaño de un vector, es por esto que explico cómo hacerlo.

#include "iostream"

using namespace std;

int main()
{
    int edades[] = {1,2,9,8,16,32,9,50,36,20,1,87};
    int limite = (sizeof(edades)/sizeof(edades[0]));
    for (int i = 0; i < limite; i++)
    {
            cout<<edades[i]<<endl;
    }
}

Vamos a ver de forma resumida en qué consiste y que hace cada una de estas líneas (las que están al interior del main).

1ª linea --> int edades[] = {1,2,9,8,16,32,9,50,36,20,1,87};
Tenemos en la primera línea la declaración de un vector que contiene las edades de 12 personas.

2ª linea -->  int limite = (sizeof(edades)/sizeof(edades[0]));
En la segunda línea, tenemos la declaración del límite del ciclo o en otras palabras el tamaño del array. El tamaño de un array se puede calcular de varias formas, aquí lo obtenemos calculando el tamaño (en bytes) del array entero, dividido por el tamaño del primer elemento de dicho array (también en bytes).

El operador sizeof en C++, retorna el tamaño en bytes del elemento que se indica. En este caso, como es un array, indica el tamaño total de ese array en bytes. Como el tipo de dato int tiene un tamaño de 4 bytes, un array de 12 elementos de tipo int tendrá 48 bytes. Luego, el tamaño del primer elemento (o cualquiera de ellos) será 4. Así, 48 dividido entre 4 es 12, que es el tamaño de nuestro array. 

3ª linea --> for (int i = 0; i < limite; i++).
Desde la tercera línea hasta la sexta, tenemos entonces un ciclo for que comienza en cero y termina en el límite (es importante notar que la condición usada es estrictamente menor "<" y no menor o igual "<="), al interior de este ciclo, es donde accedemos a cada uno de los elementos del vector.

5ª linea --> cout<<edades[i]<<endl;
La quinta línea es quizá la más vital aunque sin las demás no tendríamos nada. En esta línea, estamos accediendo a cada uno de los elementos del array de edades, un elemento por cada vuelta que da el ciclo, accedemos a cada elemento poniendo entre los corchetes la variable i, que es la que esta cambiando a medida que el ciclo va girando, así estaremos accediendo a todos los elementos e imprimiéndolos por pantalla.


FUNCION QUE RECIBE UN VECTOR O ARREGLO.
Cuando utilizamos funciones y enviamos un dat o una variable a esa función, ese dato o esa variable se convierte en una copia de la variable original.

Aunque en la función "int main()" exista, por jejemplo, unas variables x e y y, en la función que se esté trabajando tambien existe una función x e y; esto no necesario implica que sean las mismas variables. Esto, porque son variables locales.

Es importante hacer notar que en el caso de arreglos que se envian como argumento; esto no funciona exactamente igual a el caso que enviamos variables como argumento.

En C++ el compilador trabaja los arreglos por medio d apuntadores.

Y en lugar de hacer una copia del arreglo original, lo que hace el compilador es recibir la dirección de memoria en donde se aloja ese arreglo y a partir de dicha dirección es que realiza las operaciones.

Si el caso fuera que se requiere modificar los valores de un arreglo recibido como argumento de función,  a una función que no seencuentradentro de la función principal "int main()", de igualmanera el compilador estaría modificando los valores originales de ese arreglo. Por tal motivo hay que tomar en cuenta este concepto.

Para el caso que se requiera modificar los valores del arreglo, recibido como argumento de función, lo más recomendable es hacer una copia del arreglo, antes de enviarlo como argumento.



PROGRAMA QUE CALCULA MEDIA DE ARREGLO DE UNA DIMENSION

#include <iostream>
using namespace std;
float calcula_media(int A[], short int n); //***SE DECLARA FUNCION
float media;

int main()
{
    short int n,i;

    cout<<"Introduzca el número de elementos del arreglo: ";// 
    cin>>n;
    int A[n]; // SEGUNDO: Declara el vector "A" de "n" elementos

    cout<<"Introduzca los datos del vector  \n"; 
    for(i=0; i<n; i++) 
        cin>>A[i]; 
    
    media = calcula_media(A,n);
    
    cout<<"El promedio de los datos es: "<<media<<endl;


  

   return 0;

}

float calcula_media(int A[], short int n) ***SE CREA CUERPO DE LA FUNCION
{
    float resultado, suma=0; 
    short int i; 

    for (i=0; i<n; i++)
        suma=suma+A[i];
    resultado = suma/n;
    return resultado;

}

NOTA: Es bueno destacar que aunque la funcion para calcular la media
      de los valores numericos del arreglo llamada "calcula_media" se
      declaro antes de la funcion principal "int main()", se pudo haber
      creado su cuerpo en esa misma ubicacion sin motivo de interferencia
      a la logica de codificacion.

      C++ permite la flexibilidad de declarar la funcion antes del "int main" y terminala con ";"para luego crear su cuerpo estructural luego de finalizar la funcion principal, que fue este caso.

      Tambien destacar que una vez calculado la media dentro de la funcion
      "calcula_media" ---> "suma/n" el resultado se guarda en una variable tipo float llamado "resultado" y seguido se implementa el "return" para poder devolver a la funcion "calcula_media" el valor contenido en la variable "resultado". Es en ese momento que la invocacion a la funcion "calcula_media(A,n)" toma el valor retornado por la variable 
      "resultado" dentro de la funcio principal.

      media = calcula_media(A,n); Es por tal razon que se asigna ese valor de "calcula_media(A,n)" a la variable "media" en el llamado a la funcion.


      Final mente se manda a imprimir la variable q recibe el dato funcion.
      cout<<"El promedio de los datos es: "<<media<<endl;








      

      













    







