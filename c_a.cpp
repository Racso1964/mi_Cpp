
#include <iostream>

using namespace std;

int main(){

   float calificacion;
   short int faltas;

   faltas = 15;
   calificacion = 8.5;
   cout<<"aprobado: "<<((calificacion >= 7) and (calificacion <= 10) && (faltas <= 10))<<endl;

   cout<<"reprobado "<<(calificacion <= 7 || faltas > 10);

 
   
   
   
    

   return 0;

}