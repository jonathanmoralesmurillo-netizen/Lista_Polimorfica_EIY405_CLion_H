#ifndef LISTA_POLIMORFICA_EIY405_NODOANIMAL_H
#define LISTA_POLIMORFICA_EIY405_NODOANIMAL_H

#include "Animal.h"

struct NodoAnimal {
    Animal* dato;
    NodoAnimal* sig;

    NodoAnimal(Animal* animal) {
        this->dato = animal;
        this->sig = nullptr;
    }
};

#endif
