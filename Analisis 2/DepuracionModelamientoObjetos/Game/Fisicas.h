
#ifndef FISICAS_H
#define FISICAS_H
#include <vector>
#include "GameObject.h"

class Fisicas{
public :
    Fisicas();
    ~Fisicas();
    void update(float deltaTime, std::vector<GameObject*>& gameObjects);
private:
    float gravedad; // constante de la gravedad
    void aplicarGravedad();
    void colisiones();
};

#endif // FISICAS_H
