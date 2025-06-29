#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // y = a raiz cuadrada de 3x elevada a 5 sobre 2x+y; todo ello
    // mas y elevada a la potencia 2 entre x+y
    float y,x,z;

    cout<<"Introduzca el valor de x: ";
    cin>>x;

    cout<<"Introduzca el valor de y: ";
    cin>>y;

    y=sqrt(((3*pow(x,5))/(2*x*y))+((pow(y,2))/(x+y)));
    cout<<"z = "<<z<<endl;
    
    



    return 0;
}