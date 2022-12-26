//Author: Fernando Ismael Canul Caballero
//Archivos

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribirTexto();

int main(){
	
	escribirTexto();
	
	getchar();
	return 0;
}

void escribirTexto(){
	ofstream archivo;
	ofstream archivo2;
	
	string nombreDelArchivo;
	string texto;
	
	cout<<"Por favor, ingrese el nombre del archivo que quiere crear: ";
	getline(cin, nombreDelArchivo);
	
	archivo.open("01Archivos.txt", ios::out); //Creando el archivo 1
	archivo2.open(nombreDelArchivo.c_str(), ios::out); //Creando el archivo 2
	
	if(archivo.fail()){
		cout<<"Ha habido un error con el archivo 1.\n";
		exit(1); //Función para salir del programa
	}else if(archivo2.fail()){
		cout<<"Ha habido un error con el archivo 2.\n";
	}else{
		archivo<<"Hola, mundo! Mi nombre es Fernando.";
		archivo<<" Y estoy aprendiendo C++.";
		archivo.close();
		cout<<"El archivo 1 ha sido creado.\n"<<endl;
		
		cout<<"Ingrese el texto para el segundo archivo: ";
		getline(cin, texto);
		archivo2<<texto;
		archivo2.close();
		cout<<"\nEl archivo 2 ha sido creado.\n";
	}
	
}