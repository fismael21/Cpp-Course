#pragma once
class Punto {
	//Atributos de la clase
private:
	int coordenadaX;
	int coordenadaY;

	//M�todos
public:
	Punto(int coordenadaX, int coordenadaY) {
		this->coordenadaX = coordenadaX;
		this->coordenadaY = coordenadaY;
	}

	Punto() {
		this->coordenadaX = 0;
		this->coordenadaY = 0;
	}

	void setX(int valorX); //M�todo para establecer el valor de X
	void setY(int valorY); //M�todo para establecer el valor de Y

	int getX();
	int getY();
};