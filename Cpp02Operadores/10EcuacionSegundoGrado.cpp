//Autor: Fernando Canul Caballero
/* Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que
x = ((- b) +/- (sqrt(pow(b, 2) - 4ac))) / (2a). */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	float a, b, c, x1 = 0, x2 = 0;
	
	cout<<"Ingrese el valor de a: "<<endl;
	cin>>a;
	
	cout<<"Ingrese el valor de b: "<<endl;
	cin>>b;
	
	cout<<"Ingrese el valor de c: "<<endl;
	cin>>c;
	
	x1 = ((- b) + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
	x2 = ((- b) - (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
	
	cout<<endl;
	cout<<"x1 es igual a: "<<x1<<endl;
	cout<<"x2 es igual a: "<<x2<<endl;
	
	getch();
	return 0;
}
