#include <iostream>

using namespace std;
// función que no recibe argumento y no devuelve argumento

void portada()
{
    cout<<"¡ BIENVENIDOS !"<<endl;
    cout<<"PROGRAMA PARA DEMOSTRAR EL USO DE FUNCIONES"<<endl;
    for (int i=0; i<50; i++)
        cout<<"*";
}

int main()
{
    portada();

   return 0;
}     