//Autor: Fernando Ismael Canul Caballero

#include <iostream>

using namespace std;

int main(){
  int num;

  cout<<"Ingrese un numero: ";
  cin>>num;

  int *dirNum = &num;

  if(*dirNum%2 == 0){
    cout<<"El numero "<<*dirNum<<" es par"<<endl;
    cout<<"Su direccion de memoria es: "<<dirNum<<endl;
  }
  else{
    cout<<"El numero "<<*dirNum<<" no es par"<<endl;
    cout<<"Su direccion de memoria es: "<<dirNum<<endl;
  }

  getchar();
  return 0;
}