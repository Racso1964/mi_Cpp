#include <iostream>

using namespace std;

// -Programa crea arreglo de 1 dimension y carga sus datos
// -Declara una funcion que recibira un arreglo como argumento
//  y a su vez esta funcion devolver un valor flotante de la media de los datos del vector

float calcula_media(int A[], short int n); // QUINTO: Declaracion de la funcion para 
//calcular la media y definicion del parametro "A[]" que recibira el 
//argumento al momento de invocar la funcion desde int main()
//de igual manera se asigna un segundo parametro "short int n" de manera
//el compilador se de por enterado el numero de elementos del arreglo.

float media;//OCTAVO: Variable que aloja el resultado de la media del vector

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