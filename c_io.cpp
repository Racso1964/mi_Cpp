#include <iostream>

using namespace std;

int main()
{
    //DECLARACION DE VARIABLE
    int x,y;
    float calificacion1,calificacion2,promedio;

    cout<<"Teclee el valor de x ";
    cin>>x;
    cout<<"Teclee el valor de y ";
    cin>>y;


    cout<<"El numero guardado en x es: "<<x<<endl;// Si algun numero se teclea decimal. el compilador lo lee, lo despliega y se rompe la corrida del programa

    
    cout<<"El numero guardado en y es: "<<y<<endl;
    
    promedio=(x+y)/2.0;
    cout<<"El promedio es: "<<promedio<<endl;
    
   








    return 0;
}
