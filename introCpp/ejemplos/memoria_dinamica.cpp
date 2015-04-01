#include <iostream>
using namespace std;

int main ()
{
  //cracion de un array haciendo uso estatico de la memoria
  int array_estatico[4];
  
  //cracion de un array haciendo uso dinamico de la memoria
  int *array_dinamico;
  array_dinamico = new int[4];
  
  cout << "\ndireccion a la que apunta array_dinamico despues de asignar la memoria: " << array_dinamico <<endl<<endl;
  
  //se inicilizan los dos arrays
  for(int i=0;i<4;i++){
    array_estatico[i]=i*2;
    array_dinamico[i]=i*2+1;
  }
  
  //se escriben sus valores en terminal
  cout << "valores del array estatico: ";
  for(int j=0;j<4;j++){
    cout << array_estatico[j] << " ";
  }
  cout << "\nvalores del array dinamico: ";
  for(int k=0;k<4;k++){
    cout << array_dinamico[k] << " ";
  }
  
  //se borra el array dinamico
  delete[] array_dinamico;
  cout << "\n\ndireccion a la que apunta array_dinamico despues del delete: " <<*array_dinamico <<endl<<endl;
  
  //despues del delete puedo reusar array_dinamico y crear uno nuevo de diferente tama#o
  array_dinamico = new int[10];
  cout <<" Nuevo array!\n";
  
  for(int i=0;i<10;i++){
    array_dinamico[i]=i*3;
  }
  
  cout << "\nvalores del nuevo array dinamico: ";
  for(int i=0;i<10;i++){
    cout << array_dinamico[i] << " ";
  }
  cout << endl <<endl;
}

