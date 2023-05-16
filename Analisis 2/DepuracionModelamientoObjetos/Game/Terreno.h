
#ifndef TERRENO_H
#define TERRENO_H
#include "GameObject.h"
class Muro : GameObject {
public:
    void comprobarColision() override;
};

class Pared : GameObject{
    void comprobarColision() override;
};

class Suelo : GameObject{
    void comprobarColision() override;
};

#endif // TERRENO_H
