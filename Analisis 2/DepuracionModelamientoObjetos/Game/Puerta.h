
#ifndef PUERTA_H
#define PUERTA_H
#include "GameObject.h"
class Puerta : GameObject{
public:
    void ComprobarLlave();
    void comprobarColision() override;
};

#endif // PUERTA_H
