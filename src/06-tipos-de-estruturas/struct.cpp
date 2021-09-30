#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int valMax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvalmax) {
        nome = stnome;
        cor = stcor;
        pot = stpot;
        valMax = stvalmax;
        vel  = 0;
    }

    void imprimi() {
        cout << "Nome...................: " << nome << endl; 
        cout << "Cor....................: " << cor << endl; 
        cout << "Potencia...............: " << pot << endl;
        cout << "Velocidade atua........: " << vel << endl;
        cout << "Velocidade Maxima......: " << valMax << endl << endl;
    }

    void mudaVel(int mv) {
        vel = mv;
        if(vel > valMax)
            vel = valMax;
        else if(vel < 0)
            vel = 0;
    }
};


int main() {

    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    carros[0].insere("Tesla 3", "Cinza", 60, 120);
    carros[1].insere("Tesla S", "Branco", 120, 240);
    carros[2].insere("Tesla X", "Vermelho", 180, 320);
    carros[3].insere("Tesla Y", "Preto", 220, 440);
    carros[4].insere("Tesla Z", "Amarelo", 250, 500);

    for(int i=0; i<5; i++){
        carros[i].imprimi();
    }


    return 0;
}