
#ifndef JUEGO_H
#define JUEGO_H

class Juego{
private:
    int nivelActual;
    long tiempoDelta;
public:
    void cargarNivel(); // carga el siguiente nivel
    void actualizar(); // bucle del juego principal
};



#endif // JUEGO_H
