//Author: Fernando Ismael Canul Caballero

#include <iostream>
#include <stdlib.h>
#include <fstream>
//#include <stdio.h>

using namespace std;

void agregarTexto();

int main(){

	agregarTexto();

	getchar();
	return 0;
}

void agregarTexto(){

	ofstream archivo;
	string texto;
	
	archivo.open("Agregar.txt", ios::app); //Abrimos el archivo en el modo agregar.
	
	if(archivo.fail()){
		cout<<"Ha habido un error con el archivo.";
		exit(1);
	}
	
	cout<<"Ingrese el texto que quiere agregar: ";
	getline(cin, texto);
	
	archivo<<texto<<" ";
	archivo.close();
}

