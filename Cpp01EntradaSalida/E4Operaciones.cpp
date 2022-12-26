//Author: Fernando Ismael Canul Caballero

#include <iostream>

using namespace std;

int main(){
	
	float numero1, numero2, suma, resta, multiplicacion, division;
	
	cout<<"Digite el primer numero: "<<endl;
	cin>>numero1;
	cout<<"Digite el segundo numero: "<<endl;
	cin>>numero2;
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	
	cout<<"La suma de los dos numeros es: "<<suma<<endl;
	cout<<"La resta de los dos numeros es: "<<resta<<endl;
	cout<<"La multiplicacion de los dos numeros es: "<<multiplicacion<<endl;
	cout<<"La division de los dos numeros es: "<<division<<endl;
	
	getchar();      
	return 0;
}

