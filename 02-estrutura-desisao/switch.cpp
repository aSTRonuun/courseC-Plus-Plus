#include <iostream>

using namespace std;

int main() {


    int value;

    cout << "\nSelecione um Transporte:\n";
    cout << "[1] - Carro\n[2] - Moto\n[3] - Avião\n[4] - Helicoptero\n";
    
    cin >> value;

    switch (value) {
        case 1:
        case 2:
            cout << "\nTransporte Terrestes" << endl;
            switch (value){
                case 1:
                    cout << "Carro Selecionado" << endl;
                    break;
                case 2:
                    cout << "Moto Selecionado" << endl;
                default:
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "\nTransporte Aereo" << endl;
            switch (value) {
                case 3:
                    cout << "Avião Selecionado" << endl;
                    break;
                case 4:
                    cout << "Helicoptero Selecionado" << endl;
                    break;
            }
            break;
        default:
            cout << "Transporte selecionado invalido" << endl;
            break;
    }
}