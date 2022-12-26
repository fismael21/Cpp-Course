//Autor: Fernando Canul Caballero
//Realice un programa que calcule el valor que toma la siguiente funcion para valores datos x e y. f(x, y) = (sqrt(x)) / (pow(y, 2) - 1).

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	float x, y, resultado = 0;
	
	cout<<"Ingrese el valor de x: "<<endl;
	cin>>x;
	
	cout<<"Ingrese el valor de y: "<<endl;
	cin>>y;
	
	resultado = (sqrt(x)) / (pow(y, 2) - 1);
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	getch();
	return 0;
}
