#include <iostream>

using namespace std;

int main()
{
    float m,l,a,r;

    /*m=10.4;
    l=125;
    a=500;
    r=m*l/a;
    */

    //Ususario ahora debe intriducir datos por teclado

    cout<<"PROGRAMA QUE CALCULA LA RESISTENCIA ELECTRICA DE UN METAL"<<endl;
    cout<<"*********************************************************"<<endl;

    cout<<"Introduzca el valor de la resistividad  (m): ";
    cin>>m;
    cout<<"Introduzca la longitud del metal  (l): ";
    cin>>l;
    cout<<"Introduzca el area del metal  (a): ";
    cin>>a;
    r=m*l/a;

    cout<<"La resistencia electrica del alambre es: "<<r<<endl;



    return 0;
}