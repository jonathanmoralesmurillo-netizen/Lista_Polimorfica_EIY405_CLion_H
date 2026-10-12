cmake_minimum_required(VERSION 3.20)
project(Lista_Polimorfica_EIY405_CLion_H)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lista_Polimorfica_EIY405_CLion_H
        main.cpp
        Animal.h
        Perro.h
        Gato.h
        NodoAnimal.h
        ListaAnimales.h
)
