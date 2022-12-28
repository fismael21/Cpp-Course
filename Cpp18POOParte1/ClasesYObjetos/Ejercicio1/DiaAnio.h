#pragma once
class DiaAnio {

private:
	int mes;
	int dia;

public:
	DiaAnio(int dia, int mes) {
		this->dia = dia;
		this->mes = mes;
	}

	void visualizar();
	bool igual(DiaAnio& valor);

};