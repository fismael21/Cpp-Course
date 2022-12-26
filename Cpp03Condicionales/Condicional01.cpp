/*
* Autor: Fernando Ismael Canul Caballero
* Condicional if-else
*/

#include <iostream>

using namespace std;

int main(){
	int numero, dato = 5;
	
	cout<<"Digite un numero: "<<endl;
	cin>>numero;
	
	if(numero == dato){
		cout<<"El numero es 5.";
	}
	else{
		cout<<"El numero es diferente de 5.";
	}

	getchar();
	return 0;
}
