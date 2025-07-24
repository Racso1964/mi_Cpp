//Leer README_3.md
#include <iostream>

using namespace std;
// función que calcula el factorial de un numero 
// 

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

double factorial(int x)// Declaracion de la funcion
{

    //Declaracion de las variables 
    short int i;
    double resultado = 1;

    //Calculo del factorial de x
    for (i=1; i<=x; i++)
    
        resultado = resultado * i;
    return resultado;
    
    
}



int main()

{
    int x,y;
    double facto;

    portada();// Invocacion de la funcion portada
    
    
    
    
    cout<<"\n Introduzca un numero: ";// Prepara argumento para enviar a la funcion "compara"
    cin>>x;
    cout<<"\n Introduzca un segundo numero: ";// Prepara argumento para enviar a la funcion "compara"
    cin>>y;
    compara(x,y);//Invocacion de la funcion compara




    cout<<"Introduzca un numero x: ";
    cin>>x;
    facto=factorial(x);
    cout<<"El factorial de "<<x<<" es: "<<facto;



   return 0;
}     