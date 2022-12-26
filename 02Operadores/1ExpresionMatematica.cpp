//Autor: Fernando Canul Caballero
//Escribe la siguiente expresion matematica como expresion en C++. (a / b) + 1

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	float a, b, resultado = 0;
	
	cout<<"Digite el valor de a: "<<endl;
	cin>>a;
	
	cout<<"Digite el valor de b: "<<endl;
	cin>>b;
	
	resultado = (a / b) + 1;
	
	cout.precision(2);
	cout<<"El resultado es: "<<resultado<<endl;
	
	getch();
	return 0;
}
