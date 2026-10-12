#ifndef LISTA_POLIMORFICA_EIY405_GATO_H
#define LISTA_POLIMORFICA_EIY405_GATO_H

#include <iostream>
#include "Animal.h"

class Gato : public Animal {
private:
    string color;

public:
    Gato(string nombre, string id, string color)
        : Animal(nombre, id) {

        this->color = color;
    }

    void hablar() override {
        cout << "Miau" << endl;
    }
};

#endif
