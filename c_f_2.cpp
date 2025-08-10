#include <iostream>

using namespace std;

// Programa crea una funcion que calcula el maximo y promedio de un arreglo

float media;

float calcula_media(int A[], short int n);
int buscarmax(int A[], short int n);

int main()
{
    short int n,i;

    cout<<"Introduzca el número de elementos del arreglo: ";// PRIMERO:se pide al usuario el numero de elementos del arreglo
    cin>>n;

    int A[n]; // SEGUNDO: Declara el vector "A" de "n" elementos

    cout<<"Introduzca los datos del vector  \n"; //TERCERO
    for(i=0; i<n; i++) //Ciclo for para pedir los elementos del arreglo
        cin>>A[i]; //CUARTO: Pedimos cada elemento del arreglo "A" en la posicion [i]
    
    media = calcula_media(A,n); //NOVENO:Invocacion de la funcion, se manda com argumentos el vector "A" y "n" y el resultado se guarda en "media"
    
    cout<<"El promedio de los datos es: "<<media<<endl;

    // Lamar la funcion "buscarmax" y pasarle los dos argumentos que requiere:
    // q son: una un arreglo llamado "A" y un entero llamado "n"
    cout<<"El valor maximo del arreglo es: "<<buscarmax(A,n)<<endl;



  

   return 0;

}

float calcula_media(int A[], short int n)// SEXTO: Cuerpo de la funcion al final de la funcion principal, esta opcion de igual es valida
{
    float resultado, suma=0; // SEPTIMO: Declaracion de variables locales
    short int i; // para la funcion "calcula_media"

    for (i=0; i<n; i++)
        suma=suma+A[i];
    resultado = suma/n;
    return resultado;

}

int buscarmax(int A[], short int n)
{

    int valormax;
    short int i;

    valormax = A[0];// Inucializa el puntero del vector "A" en el elemento q ocupa la posicion cero
    for (i=0; i<n; i++)
        if (valormax<A[i]) //Si lo que hay en en la posicion A[0] es menor que lo que hay en A[i] entonces actualizamos el valor maximo
            valormax=A[i]; // Actualzacion del valor maximo
    return valormax; // AL finalizar el for se retorna el contenido en valormax
    
}

//La funcion "buscamax" recibe un vector como argumento y tambie recibe un numero entero "n" y va a devolver un valor entero que representa el valor maximo de ese arreglo.
//Una vez que se invoqueesafuncion en "main" como ya sesabe que la funcion deveolvera un valor, entonces se puede declarar otra variable para almacenar dicho valor.
//En caso que el valor devuelto por la funcion no se va a utilizar en un futuro y solo se requiere presenar por consola su valor, se procede como ejemplo: cout<<"El valor maximo del arreglo es: "<<buscamax(A,n);