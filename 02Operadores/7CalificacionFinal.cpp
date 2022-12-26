//Autor: Fernando Canul Caballero
/* La calificacion final de un estudiante es el promedio de tres notas:
-La nota de practicas que cuenta con un 30% del total
-La nota teorica que cuenta con un 60% del total
-La nota de participacion que cuenta el 10% restante
Escriba un programa que lea las tres notas del alumno y escriba su nota final. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	float nota1, nota2, nota3, calificacionfinal = 0;
	
	cout<<"Ingrese su nota de practicas: "<<endl;
	cin>>nota1;
	
	cout<<"Ingrese su nota teorica: "<<endl;
	cin>>nota2;
	
	cout<<"Ingrese su nota de participacion: "<<endl;
	cin>>nota3;
	
	calificacionfinal = (nota1 * 0.3) + (nota2 * 0.6) + (nota3 * 0.1);
	
	cout.precision(2);
	cout<<"La calificacion final del alumno es de: "<<calificacionfinal<<endl;
	
	getch();
	return 0;
}
