#include <iostream>
using namespace std;

int main ()
{

  // declara variables:
  int a=5;
  int *p; //puntero int sin inicializar

  //escribe el valor del puntero (direccion a la que apunta)
  cout <<"\nvalor del puntero p antes de inicializar: " << p << endl;
  //escribe el valor de la direccion de memoria a la que apunta p (basura porque no esta inicializado)
  cout <<"valor de la direccion de memoria a la que apunta p antes de inicializar: " << *p << endl;
  
  //escribe el valor de a y su direccion de memoria
  cout <<"\nvalor de a: " << a << endl;
  cout <<"direccion de a: " << &a << endl;
  
  p = &a; //hace que el puntero apunte a la direccion de memoria en la que esta a
  
  //escribe el nuevo valor del puntero (direccion a la que apunta)
  cout <<"\nnuevo valor del puntero p: " << p << endl;
  //escribe el valor de la direccion de memoria a la que apunta p
  cout <<"valor de la nueva direccion de memoria a la que apunta p: " << *p << endl;
  
  //modifica el valor de a usando p
  *p=6;
  
  //escribe el nuevo valor de a y su direccion de memoria (tiene que ser la misma)
  cout <<"\nnuevo valor de a: " << a << endl;
  cout <<"direccion de a:     " << &a << endl <<endl;
  
  // otra manera de modificar 
  p[0]=8;
  cout <<"valor de a:         " << *p << endl <<endl;
  // termina:
  return 0;
}

