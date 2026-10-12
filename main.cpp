#include <iostream>
#include "ListaAnimales.h"
#include "Perro.h"
#include "Gato.h"

using namespace std;



#include <iostream>
#include "Perro.h"
#include "Gato.h"
#include "NodoAnimal.h"

using namespace std;

int main() {

    Animal* animal1 = new Perro("Max", "A101", "Labrador");
    Animal* animal2 = new Gato("Luna", "A102", "Negro");

    NodoAnimal* nodo1 = new NodoAnimal(animal1);
    NodoAnimal* nodo2 = new NodoAnimal(animal2);

    nodo1->sig = nodo2;

    cout << "Primer animal:" << endl;
    nodo1->dato->hablar();

    cout << "Segundo animal:" << endl;
    nodo1->sig->dato->hablar();

    delete nodo1->dato;
    delete nodo2->dato;

    delete nodo2;
    delete nodo1;

    return 0;
}