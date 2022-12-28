#include "DiaAnio.h"
#include <iostream>

using namespace std;

void DiaAnio::visualizar() {
	cout << "Mostrando los datos" << endl;
	cout << "El dia: " << this->dia << endl;
	cout << "El mes: " << this->mes << endl;
}

bool DiaAnio::igual(DiaAnio& valor) {
	if (this->dia == valor.dia && this->mes == valor.mes) {
		return true;
	}
	else {
		return false;
	}
}