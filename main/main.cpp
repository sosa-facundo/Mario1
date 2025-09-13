#include <iostream>
using namespace std;

#include "Personaje.h"
#include "PisoPinchudo.h"

int main()
{
    Personaje mario;
    PisoPinchudo pinchos;

    mario._coordenadaX = 100;
    pinchos._coordenadaX = 400;
    pinchos._ancho = 40;

    while (true)
    {
        mario.Caminar();

        if (mario._coordenadaX >= pinchos._coordenadaX &&
        mario._coordenadaX <= pinchos._coordenadaX + pinchos._ancho)
        {
            cout << "¡Perdiste, te pinchaste!\n";
            return 0;
        }
    }
}
