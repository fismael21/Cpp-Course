//Autor: Fernando Canul Caballero
//Escriba un programa que lea los dos catetos de un triangulo y escriba su hipotenusa.

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	float cat1, cat2, hipotenusa = 0;
	
	cout<<"Ingrese el cateto opuesto: "<<endl;
	cin>>cat1;
	
	cout<<"Ingrese el cateto adyacente: "<<endl;
	cin>>cat2;
	
	hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2));
	
	cout<<"La hipotenusa del triangulo es: "<<hipotenusa<<endl;
	
	getch();
	return 0;
}
