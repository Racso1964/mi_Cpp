#include <iostream>

using namespace std;

int main()
{
    //DECLARACION DE VARIABLE
    int x,y;
    float calificacion1,calificacion2,promedio;
    char letra;
    string nombre;

    /*cout<<"Teclee el valor de calificacion1 ";
    cin>>calificacion1;
    cout<<"Teclee el valor de calificacion2 ";
    cin>>calificacion2;


    cout<<"El numero guardado en calificacion1 es: "<<calificacion1<<endl;// Si algun numero se teclea decimal. el compilador lo lee, lo despliega y se rompe la corrida del programa

    
    cout<<"El numero guardado en calificacion2 es: "<<calificacion2<<endl;
    
    promedio=(calificacion1+calificacion2)/2;
    cout<<"El promedio es: "<<promedio<<endl;
    
    cout<<"Tecle un caracter ";
    cin>>letra;
    cout<<"La letra que tecleaste es: "<<letra<<endl;
    
    INTRODUCIR UNA PALABRA
    cout<<"Introduce tu nombre: ";
    cin>>nombre;

    cout<<"Bienvenido "<<nombre<<endl;
*/
    //INTRODUCIR VARIAS PALABRAS.en variable string y getline() con 2 parametros
    cout<<"Introduce tu nombre: ";
    getline(cin,nombre);
    cout<<"Bienvenido "<<nombre<<endl;




   








    return 0;
}
