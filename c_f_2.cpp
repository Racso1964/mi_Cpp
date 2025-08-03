#include <iostream>

using namespace std;

// 

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
        if (valormax<A[i]) //Si lo que hay en en la posicion A[0] es menor que lo que hay en A[i] entonces actualizamos el valor maimo
            valormax=A[i]; // Actualzacion del valor maximo
    return valormax; // AL finalizar el for se retorna el contenido en valormax
    
}