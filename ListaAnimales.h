#ifndef LISTA_POLIMORFICA_EIY405_LISTAANIMALES_H
#define LISTA_POLIMORFICA_EIY405_LISTAANIMALES_H

#include "NodoAnimal.h"

class ListaAnimales {
private:
    NodoAnimal* cabeza;

public:
    ListaAnimales() {
        this->cabeza = nullptr;
    }

    ~ListaAnimales() {
        while (this->cabeza != nullptr) {
            NodoAnimal* borrar;
            borrar = this->cabeza;

            this->cabeza = this->cabeza->sig;

            delete borrar->dato;
            delete borrar;
        }
    }

    void insertarInicio(Animal* animal) {

        NodoAnimal* nuevo = new NodoAnimal(animal);

        nuevo->sig = this->cabeza;

        this->cabeza = nuevo;
    }

    bool buscarId(string id) {

        NodoAnimal* actual = this->cabeza;

        while (actual != nullptr) {

            if (actual->dato->getId() == id) {
                return true;
            }

            actual = actual->sig;
        }

        return false;
    }

    void insertarFinal(Animal* animal) {
        NodoAnimal* nuevo;
        nuevo = new NodoAnimal(animal);

        if (this->cabeza == nullptr) {
            this->cabeza = nuevo;
            return;
        }

        NodoAnimal* actual;
        actual = this->cabeza;

        while (actual->sig != nullptr) {
            actual = actual->sig;
        }

        actual->sig = nuevo;
    }

    void mostrar() const {
        NodoAnimal* actual;
        actual = this->cabeza;

        while (actual != nullptr) {
            actual->dato->hablar();
            actual = actual->sig;
        }
    }





    bool eliminar(string id) {

        if (this->cabeza == nullptr) {
            return false;
        }

        // Caso 1: el nodo a eliminar es la cabeza
        if (this->cabeza->dato->getId() == id) {

            NodoAnimal* temporal = this->cabeza;

            this->cabeza = this->cabeza->sig;

            delete temporal->dato;
            delete temporal;

            return true;
        }

        // Caso 2: buscar en el resto de la lista
        NodoAnimal* actual = this->cabeza;

        while (actual->sig != nullptr) {

            if (actual->sig->dato->getId() == id) {

                NodoAnimal* temporal = actual->sig;

                actual->sig = temporal->sig;

                delete temporal->dato;
                delete temporal;

                return true;
            }

            actual = actual->sig;
        }

        return false;
    }

};


#endif
