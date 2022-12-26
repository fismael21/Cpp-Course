//Author: Fernando Ismael Canul Caballero

#include <iostream>

using namespace std;

int main(){
	
	int edad;
	char sexo[15];
	float altura;
	
	cout<<"Ingrese su edad: "<<endl;
	cin>>edad;
	cout<<"Ingrese su sexo: "<<endl;
	cin>>sexo;
	cout<<"Ingrese su altura (en metros): "<<endl;
	cin>>altura;
	
	cout<<endl;
	cout<<"Los datos que ingreso son los siguientes: "<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<endl;

	getchar();
	return 0;
}
