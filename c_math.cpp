#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1,x2,z;
    float a,b,c;

    // Calcular las raices de una ecuacion "ax^²+bx+c=0"

    cout<<"Introduzca el valor de a: ";
    cin>>a;

    cout<<"Introduzca el valor de b: ";
    cin>>b;

    cout<<"Introduzca el valor de c: ";
    cin>>c;

    x1= (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    x2= (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);

    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;

    cout<<"comprobacion con x1: "<<(a*(x1*x1)+b*x1+c)<<endl;
    cout<<"comprobacion con x2: "<<(a*(x2*x2)+b*x2+c);



   
    



    return 0;
}