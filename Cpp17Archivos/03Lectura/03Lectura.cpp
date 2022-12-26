//Author: Fernando Ismael Canul Caballero

#include <iostream>
#include <stdlib.h>
#include <fstream>
//#include <stdio.h>

using namespace std;

void leerTexto();

int main(){
	
	leerTexto();

	getchar();
	return 0;
}

void leerTexto(){
	
	ifstream archivo;
	string texto;
	
	archivo.open("Lectura.txt", ios::in); //Abrimos el archivo en modo lectura.
	
	if(archivo.fail()){
		cout<<"Ha habido un error tratando de leer el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //Mientras no sea el final del archivo.
		getline(archivo, texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo.
	
}