//Autor: Fernando Canul Caballero
//Escriba un programa que lea las cuatro notas de un alumno y calcule la nota final media del alumno.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	float nota1, nota2, nota3, nota4, notafinal = 0;
	
	cout<<"Ingrese la primera nota del alumno: "<<endl;
	cin>>nota1;
	
	cout<<"Ingrese la segunda nota del alumno: "<<endl;
	cin>>nota2;

	cout<<"Ingrese la segunda nota del alumno: "<<endl;
	cin>>nota3;

	cout<<"Ingrese la segunda nota del alumno: "<<endl;
	cin>>nota4;
	
	notafinal = (nota1 + nota2 + nota3 + nota4) / 4;
	
	cout<<"La nota final media del alumno es: "<<notafinal<<endl;
	
	getch();
	return 0;
}
