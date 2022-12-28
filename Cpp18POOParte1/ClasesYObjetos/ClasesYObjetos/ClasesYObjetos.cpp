// Creación de objetos

#include <iostream>
#include "Punto.h";

using namespace std;

int main(int argcs, char** argv)
{
    cout << "Hello World!\n";

    Punto punto(2,3);
    cout << "El valor de X es: " << punto.getX() << " y el valor de Y es: " << punto.getY() << endl;

    Punto* punto2 = new Punto();
    punto2->setX(4);
    punto2->setY(7);

    cout << "El valor de X es: " << punto2->getX() << " y el valor de Y es: " << punto2->getY() << endl;

    return 0;
}
