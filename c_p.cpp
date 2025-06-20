#include <iostream>

using namespace std;

int main()
{
    //DECLARACION DE VARIABLE
    int x,y;
    char letra;
    float calificacion1, calificacion2, promedio;
    string nombre;

    //ASIGNACION DE VARIABLE
    x=10;
    y=20;
    letra='a'; 
    //VISUALIAR VALOR DE VARIABLE
    cout<<"El valor de x es: "<<x<<endl;
    cout<<"El valor de y es: "<<y<<endl;
    cout<<"El valor almacenado en letra es: "<<letra<<endl;
    //MOSTRAR VALOR ASCII
    letra = 70;
    cout<<"El caracter ASCII almacenado en letra es: "<<letra<<endl;
    //ASIGNAR VALOR A VARIABLE FLOTANTE
    calificacion1=8.5;
    calificacion2=9.2;//VISUALIAR VALOR DE VARIABLE
    promedio=(calificacion1+calificacion2)/2;

    nombre = "Oscar";
    cout<<"El valor asignado a calificacion1 es: "<<calificacion1<<endl;
    cout<<"El valor asignado a calificacion2 es: "<<calificacion2<<endl;
    cout<<"El promedio final es "<<promedio<<endl;
    cout<<"El alumno "<<nombre<<" tiene una calificación de: "<<promedio<<endl;





    return 0;
}
