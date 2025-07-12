#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float angulo,y;
    const float pi=3.141592;

    // Convertir radianes a grados"

    cout<<"Introduzca el valor del angulo en radianes: ";
    cin>>angulo;
    angulo=angulo*pi*180;

    cout<<"El valor del angulo en grados es: "<<angulo<<endl;




    return 0;
}