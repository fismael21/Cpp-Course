/*
* Autor: Fernando Ismael Canul Caballero
* Escriba un programa que lea dos números y determine cuál de ellos es el mayor.
*/

#include <iostream>

using namespace std;

int main(){
	int numero1, numero2;
	
	cout<<"Digite dos numero: "<<endl;
	cin>>numero1>>numero2;
	
	if(numero1 == numero2){
		cout<<"Los numeros son iguales";
	}
	else if(numero1 > numero2){
		cout<<"El primer numero es mayor que el segundo numero";
	}
	else {
		cout<<"El segundo numero es mayor que el primer numero";
	}

	getchar();
	return 0;
}
