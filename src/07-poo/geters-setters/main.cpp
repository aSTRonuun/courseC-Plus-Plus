#include <iostream>
#include "Classes.h"

using namespace std;

int main() {

    Veiculo *veiculo1 = new Veiculo(1);
    Veiculo *veiculo2 = new Veiculo(2);
    Veiculo *veiculo3 = new Veiculo(3);

    veiculo1->setLigado(1);
    veiculo2->setLigado(1);
    // veiculo3->setLigado(1);

    cout << veiculo1->getVelMax() << endl;

    cout << veiculo2->getVelMax() << endl;

    cout << veiculo3->getVelMax() << endl;

    if(veiculo1->getLigado()) {
        cout << "Veiculo 1 esta ligado" << endl;
    }else {
        cout << "Veiculo 1 esta desligado" << endl;
    }

    if(veiculo2->getLigado()) {
        cout << "Veiculo 2 esta ligado" << endl;
    }else {
        cout << "Veiculo 2 esta desligado" << endl;
    }

    if(veiculo3->getLigado()) {
        cout << "Veiculo 3 esta ligado" << endl;
    }else {
        cout << "Veiculo 3 esta desligado" << endl;
    }

    


    return 0;
}