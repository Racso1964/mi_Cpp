#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //calcular y es igual a raiz cuadrada de 3 equis cuadrada mas 6 sobre 2 equis
    float y,x;
    float numerador, denominador;

    cout<<"Introduzca el valor de x: ";
    cin>>x;
    numerador=3*pow(x,2)+6;
    denominador=2*x;
    y=sqrt(numerador/denominador);
    cout<<"y = "<<y<<endl;
    
    



    return 0;
}