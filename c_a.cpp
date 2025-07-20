//Codigo_para_arreglos en C++. Referencia Documental en README_3.md
#include <iostream>

using namespace std;

int main()
{
   int edades[]={1,2,9,8,16,32,9,50,36,20,1,87};
   int limite = (sizeof(edades)/sizeof(edades[0]));
   cout<<"El tamaño del vector en byte es: "<<limite<<endl;
    

   return 0;
}     