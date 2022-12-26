//Autor: Fernando Canul Caballero
//Escriba un fragmento de programa que intercambie los valores de las variables.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int a, b, aux;
	
	cout<<"Ingrese el valor de a: "<<endl;
	cin>>a;
	
	cout<<"Ingrese el valor de b: "<<endl;
	cin>>b;
	
	aux = a;
	a = b;
	b = aux;
	
	cout<<endl;
	cout<<"El nuevo valor de a es: "<<a<<endl;
	cout<<"El nuevo valor de b es: "<<b<<endl;
	
	getch();
	return 0;
}
