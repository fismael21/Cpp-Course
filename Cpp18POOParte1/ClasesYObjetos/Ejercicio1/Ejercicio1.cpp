// Ejercicio1.cpp 

/*

*/

#include <iostream>
#include "DiaAnio.h"

using namespace std;

int main()
{
    DiaAnio* fechaActual;
    DiaAnio* cumple;

    int dia;
    int mes;

    cout << "Introduzca el dia: " << endl;
    cin >> dia;
    cout << "Introduzca el mes: " << endl;
    cin >> mes;

    fechaActual = new DiaAnio (dia, mes);

    cout << "Introduzca el dia de su cumpleanos: " << endl;
    cin >> dia;
    cout << "Introduzca el mes de su cumpleanos: " << endl;
    cin >> mes;

    cumple = new DiaAnio(dia, mes);

    //Mostramos las fechas
    fechaActual->visualizar();
    cumple->visualizar();

    if (fechaActual->igual(*cumple)) {
        cout << "Feliz cumpleanos" << endl;
    }
    else {
        cout << "Tenga un buen dia" << endl;
    }

    return 0;
}
