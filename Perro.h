#ifndef LISTA_POLIMORFICA_EIY405_PERRO_H
#define LISTA_POLIMORFICA_EIY405_PERRO_H

#include <iostream>
#include "Animal.h"

class Perro : public Animal {
private:
    string raza;

public:
    Perro(string nombre, string id, string raza)
        : Animal(nombre, id) {

        this->raza = raza;
    }

    void hablar() override {
        cout << "Guau" << endl;
    }
};

#endif
