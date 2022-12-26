//Autor: Fernando Ismael Canul Caballero
//Declaración de punteros en C++
//&n = dirección de n
//*n = la variable cuya dirección está almacenada en n

#include <iostream>

using namespace std;

int main(){
  int num;
  int *dirNum;

  num = 22;
  dirNum = &num;

  cout<<"Numero: "<<num<<endl;
  cout<<"Direccion de memoria de la variable num: "<<&num<<endl;

  cout<<"Numero: "<<*dirNum<<endl;
  cout<<"Direccion de memoria de la variable num: "<<&dirNum<<endl;

  getchar();
  return 0;
}