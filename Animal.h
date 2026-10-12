#ifndef LISTA_POLIMORFICA_EIY405_ANIMAL_H
#define LISTA_POLIMORFICA_EIY405_ANIMAL_H

using namespace std;

class Animal {
protected:
    string nombre;
    string id;

public:
    Animal(string nombre, string id) {
        this->nombre = nombre;
        this->id = id;
    }

    string getId() {
        return this->id;
    }

    virtual void hablar() = 0;

    virtual ~Animal() {
    }
};
#endif
