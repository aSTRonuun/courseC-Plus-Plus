#include <iostream>

using namespace std;

class Veiculo {
private:
    int velMax;
    int potencia;
public:
    int rodas;
    string nome;
protected:
    int portas;
    string cor;
};

class Carro:public Veiculo {
public:
    Carro() {
        //velMax = 180;
        //potencia = 150;
        rodas = 4;
        nome = "Carro";
        portas = 4;
        cor = "Vermelho";

        // cout << velMax << endl;
        // cout << potencia << endl;
        cout << rodas << endl;
        cout << nome << endl;
        cout << portas << endl;
        cout << cor << endl;
    }
};

class Moto {
public:
    Carro carro;

    Moto() {
        carro.nome = "Vitor";
        carro.rodas = 2;
        //carro.portas = 0;
        //carro.cor = "Vermelho";

        cout << endl;
        cout << carro.nome << endl;
        cout << carro.rodas << endl;
    }
};

int main() {

    Carro v1;

    cout << endl;

    Moto v2;


    return 0;
}