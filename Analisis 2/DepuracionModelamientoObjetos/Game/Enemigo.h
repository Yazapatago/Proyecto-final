
#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "GameObject.h"

class Enemigo : GameObject {
public:
    bool estaMirandoEnfrente; // chequea si se esta mirando enfrente
    void comprobarColision() override;
private:
    void Mover();
};

#endif // ENEMIGO_H
