#include <iostream>
#include "Classes1.h"

using namespace std;

int main() {

    Moto *veiculo1 = new Moto();
    Carro *veiculo2 = new Carro();
    Tanque *veiculo3 = new Tanque();

    veiculo1->imprimir();

    cout << endl;

    veiculo2->imprimir();

    cout << endl;

    veiculo3->imprimir();




    return 0;
}