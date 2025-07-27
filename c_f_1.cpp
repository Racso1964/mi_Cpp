#include <iostream>

using namespace std;

//Programa crea arreglo de 1 dimension y carga sus datos

int main(){
    short int n,i; //PRIMERO: Declara variables: "n" para numero de lelementos del vector, "i" para ciclo for
    cout<<"Introduzca el número de elementos del arreglo: ";// se pide al usuario el numero de elementos del arreglo
    cin>>n;

    int A[n]; // SEGUNDO: Declara el vector "A" de "n" elementos

    cout<<"Introduzca los datos del vector  \n"; //TERCERO
    for(i=0; i<n; i++){ //Ciclo for para pedir los elementos del arreglo
        cin>>A[i]; //CUARTO: Pedimos cada elemento del arreglo "A" en la posicion [i]
    }


  

   return 0;

}