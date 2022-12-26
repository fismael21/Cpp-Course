//Author: Fernando Ismael Canul Caballero

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribirFrases();

int main(){
	
	escribirFrases();
	
	getchar();
	return 0;
}

void escribirFrases(){
	
	ofstream archivo;
	string nombreDelArchivo;
	string frase;
	char respuesta;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin, nombreDelArchivo);
	
	archivo.open(nombreDelArchivo.c_str(), ios::out); //Creando o abriendo el archivo.
	
	if(archivo.fail()){
		cout<<"Ha habido un error con el archivo.";
		exit(1);
	}
	
	do{
		fflush(stdin); //Limpiando el buffer.
		cout<<"Digite una frase: ";
		getline(cin, frase);
		archivo<<frase<<endl;
		
		cout<<"Desea agregar otra frase (S/N): ";
		cin>>respuesta;
	}while((respuesta == 'S') || (respuesta == 's'));
	
	archivo.close();
}
