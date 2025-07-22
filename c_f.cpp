//Leer README_3.md
#include <iostream>

using namespace std;
// función que si recibe argumento y no devuelve argumento
// Recibe dos numeros, los compara y muestra en consola cual es mayor

void portada() //Funcion que muetra texto y crea portada
{
    cout<<"¡ BIENVENIDOS !"<<endl;
    cout<<"PROGRAMA PARA DEMOSTRAR EL USO DE FUNCIONES"<<endl;
    for (int i=0; i<50; i++)
        cout<<"*";
}

void compara(int a, int b)
{
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;

    if (a >= b)
        cout<<"\n A es mayor"<<endl;
    else
        cout<<"\n B es mayor"<<endl;

}



int main()

{
    int x,y;

    portada();// llamada a la funcion portada

    cout<<"\n Introduzca un numero: ";// Prepara argumento para enviar a la funcion "compara"
    cin>>x;

    cout<<"\n Introduzca un segundo numero: ";// Prepara argumento para enviar a la funcion "compara"
    cin>>y;

    compara(x,y);//llamada a la funcion compara

    



   return 0;
}     