#include <iostream>

using namespace std;

int main()
{
    //DECLARACION DE VARIABLE
    int x,y;
    char letra;
    float calificacion1, calificacion2, promedio;
    string nombre;
    short int contador,a,b,c;

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

    //VARIABLE DE CONTEO
    cout<<"El valor de contador es: "<<contador<<endl;
    contador++;//SE INCREMENTA EN 1 EL VALOR DE LA VARIABLE
    cout<<"El valor de contador es "<<contador<<endl;
    contador++;//Se continua haciendo incremento
    cout<<"El valor de contador es "<<contador<<endl;
    contador=contador*5;//MULTIPLICA LA VARIABLE POR 5
    cout<<"El valor de contador es "<<contador<<endl;

    a=10000;
    b=20000;
    c=a+b;

    cout<<"El valor de la variable c es: "<<c<<endl;

    a=12767;//PESCANDO UN ERROR DE LOGICA DE DEDESBORDAMIENTO DE RANGO DEL TIPO DE VARIABLE
    c=a+b;
    cout<<"El valor de la variable c es: "<<c<<endl;
    a=12768;
    c=a+b;
    cout<<"La suma de a + b es: "<<c<<endl;







    return 0;
}
