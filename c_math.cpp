#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x,y,z;

    // z = la raiz cubica de x mas equis al cuadrado mas y al cuadrado; todo ello sobre 5x

    cout<<"Introduzca el valor de x: ";
    cin>>x;

    cout<<"Introduzca el valor de y: ";
    cin>>y;


    z=(pow(x,1/3)) + ((pow(x,2))+pow(y,2)) / (5*x);
    cout<<"z = "<<z<<endl;
    
    



    return 0;
}