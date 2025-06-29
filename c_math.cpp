#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x,y,z;

    // z = la raiz cuadrada de{[( 3x elevada a 5)  sobre (2xy)] + [(y al cuadrado)sobre (x+y])]}

    cout<<"Introduzca el valor de x: ";
    cin>>x;

    cout<<"Introduzca el valor de y: ";
    cin>>y;


    z=sqrt(3*pow(x,5)/(2*x*y)+(pow(y,2))/(x+y));
    cout<<"z = "<<z<<endl;
    
    



    return 0;
}