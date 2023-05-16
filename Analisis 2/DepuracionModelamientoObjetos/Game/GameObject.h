
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>

class GameObject{
public:
    float x, y; // Posicion del objeto
    float vx, vy; // Velocidad del objeto
    float ax, ay; // Aceleracion del objeto
    float masa; // Masa del objeto
    float ancho, alto; // Ancho y alto del objeto
    bool estaColisionando; // Indica si el objeto esta colsionando con otro

    void actualizar();// Actualizar la posición y velocidad utilizando las ecuaciones de la física
    void comprobarColision(GameObject* other); // comprueba si hay colision entre los rectangulos de los objetos
    void resolverColision(GameObject* other); // Utilizar la fórmula de choque elástico para resolver la colisión
};

#endif // GAMEOBJECT_H
