#include "funciones.h"
#include "math.h"

namespace foobar
{
    bool VerificarEdad(int edad)
    {
    //persona mas vieja de la historia, 122 años     
        return (edad>=0 && edad<= 122);
    }

    float CalcularDistancia(float x1, float y1, float x2, float y2)
    {
        return (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
    }
}
