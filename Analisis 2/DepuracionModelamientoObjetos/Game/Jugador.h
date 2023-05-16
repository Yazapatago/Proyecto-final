
#ifndef JUGADOR_H
#define JUGADOR_H
#include "GameObject.h"
class Jugador : GameObject{
    bool estaMuerto;
    bool tieneLlave;
    void Atacar();
    void Morir();
    void Mover(); // multiplicacion de la posicion en x, por el tiempo delta del juego
    void comprobarColision() override;
};

#endif // JUGADOR_H
