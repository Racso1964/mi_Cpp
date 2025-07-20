// Desafio Documental en README_3.md
// crear un programa con el cual podamos guardar los títulos y los autores de diferentes libros sin perder ninguno de ellos
// El usuario es el encargado de suministrar la información de cada libro.
// Vamos a suponer que el usuario solo podrá ingresar un máximo de 5 libros, para así tener un tamaño de vector fijo

// Se delcaran los vectores de tipo string
// Las entradas cin al contener espacios generan inconsistencia petitiva
// Implementa la la funcion getline
// la función getline(...) que recibe como primer argumento el flujo de entrada de cin
// como segundo argumento la variable en la que queremos poner el valor.
#include <iostream>

using namespace std;

int main()
{
   string titulos[5];
   string autores[5];
    cout << "Por favor ingrese la siguiente información de los Libros: \n";
    for(int i = 0; i < 5; i++)
      {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        //cin >> titulos[i]; //No funciona con espacios
        getline(cin, titulos[i]);
        cout << "Autor: ";
        //cin >> autores[i]; //No funciona con espacios
        getline(cin, autores[i]);
    }
   
    

   return 0;
}     