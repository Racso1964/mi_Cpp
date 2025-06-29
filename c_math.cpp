#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //calcular y es igual a raiz cuadrada de 3 equis cuadrada mas 6 sobre 2 equis
    float y,x;

    cout<<"Introduzca el valor de x: ";
    cin>>x;

    y=sqrt((3*pow(x,2)+6)/(2*x));
    cout<<"y = "<<y<<endl;
    
    



    return 0;
}