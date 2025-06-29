#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x,y;
    
    // y = la (raiz cuadrada de 3x elevada a 2) mas 6; to do ello sobre 2x

    cout<<"Introduzca el valor de x: ";
    cin>>x;


    y=sqrt((3*pow(x,2)+6)/(2*x));
    cout<<"y = "<<y<<endl;
    
    



    return 0;
}