#pragma once
class Punto {
	//Atributos de la clase
private:
	int coordenadaX;
	int coordenadaY;

	//Métodos
public:
	Punto(int coordenadaX, int coordenadaY) {
		this->coordenadaX = coordenadaX;
		this->coordenadaY = coordenadaY;
	}

	Punto() {
		this->coordenadaX = 0;
		this->coordenadaY = 0;
	}

	void setX(int valorX); //Método para establecer el valor de X
	void setY(int valorY); //Método para establecer el valor de Y

	int getX();
	int getY();
};