//
// Created by Mario Martinez on 18/10/20.
//

#ifndef HASH_ABIERTO_VALIDAR_H
#define HASH_ABIERTO_VALIDAR_H
#include <iostream>
using namespace std;

class Validar {
public:
    int ingresarInt(string);

    int nPrimoMenorQue(int); // retorna el número primo menor al valor pasado por argumento

    bool esPrimo(int); // Analiza si un número es primo
};

#endif //HASH_ABIERTO_VALIDAR_H
