//Author: Fernando Ismael Canul Caballero

#include <iostream>

using namespace std;

int main(){
	
	float precio, IVA = 0.16, costofinal;
	
	cout<<"Ingrese el precio del producto: "<<endl;
	cin>>precio;
	
	costofinal = precio + (precio * IVA);
	
	cout<<"El costo total del producto es de "<<costofinal<<" pesos."<<endl;
	
	getchar();
	return 0;
}
