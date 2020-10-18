#include <iostream>
#include "../tl/Gestor.h"
#include "utilitario/Validar.h"
Gestor gestor;
Validar validar;
using namespace std;
void menu();
void procesarMenu(int &, bool &);
int ingresarNum(string);


int main() {
    menu();
    return 0;
}
void menu() {
    bool salir;
    string valor;
    int opcion = 0;
    do {
        cout << "\nMenú Árbol\n\nElija una opción\n" <<
             "01 Agregar elemento\n" <<
             "02 Buscar elemento\n" <<
             "03 Número primo menor que ...\n" <<
             "04 Salir\n";
        cin >> valor;
        opcion = validar.ingresarInt(valor);
        procesarMenu(opcion, salir);
    } while (!salir);
}
void procesarMenu(int & pOpcion, bool & salir) {
    switch (pOpcion) {
        case 1:
//            addValores();
            break;
        case 2:
//            buscarValores();
            break;
        case 3:
//            nPrimoMenorQue();
            break;
        case 4:
            salir = true;
            break;
        default:
            cout << "Opción inválida\n";
    }
}
int ingresarNum(string msg){
    int num;
    string valor;
    do {
        cout << msg << endl;
        cin >> valor;
        num = validar.ingresarInt(valor);
        if (num == -1){
            cout << "El valor ingresado es incorrecto\nVuelva a intentarlo\n";
        }
    } while (num == -1);
    return num;
}