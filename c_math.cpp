#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float angulo,y;
    const float pi=3.1416;

    // Calcular seno de un angulo"

    cout<<"Introduzca el valor del angulo en grados: ";
    cin>>angulo;
    angulo=angulo*pi/180;

    y = sin(angulo);

    cout<<"El seno de "<<angulo<<" es: "<<y<<endl;




    return 0;
}