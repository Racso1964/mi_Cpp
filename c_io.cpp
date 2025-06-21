#include <iostream>

using namespace std;

int main()
{
    //DECLARACION DE VARIABLE
    int x,y;
    float calificacion1,calificacion2,promedio;

    cout<<"Teclee el valor de calificacion1 ";
    cin>>calificacion1;
    cout<<"Teclee el valor de calificacion2 ";
    cin>>calificacion2;


    cout<<"El numero guardado en calificacion1 es: "<<calificacion1<<endl;// Si algun numero se teclea decimal. el compilador lo lee, lo despliega y se rompe la corrida del programa

    
    cout<<"El numero guardado en calificacion2 es: "<<calificacion2<<endl;
    
    promedio=(calificacion1+calificacion2)/2;
    cout<<"El promedio es: "<<promedio<<endl;
    
   








    return 0;
}
