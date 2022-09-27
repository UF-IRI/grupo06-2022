#include <cstdlib>
#include <iostream>

#include "funciones.h"

using namespace std;
using namespace foobar;

int main(int argc, char** argv)
{
    foobar::Example example{};
    std::cout << "Example.getValue() => " << example.getValue() << std::endl;

    int edad;
    cout << "Ingrese una edad" << endl;
    cin >> edad;


    if (VerificarEdad(edad))
        cout << "Es valida" << endl;
    else
        cout << "Es invalida" << endl;


    cout << "Distancia entre (5,1) y (1,4)" << endl;
    cout << CalcularDistancia(5.0, 1.0, 1.0, 4.0) << endl;


    return EXIT_SUCCESS;
}