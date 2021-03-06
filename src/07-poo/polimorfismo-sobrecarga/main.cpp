#include <iostream>

using namespace std;

class Carro {
private:
    int velMax;
    const char* nome;
public:
    int potencia;

    int getVelMax() {
        return velMax;
    }

    const char* getNome(){
        return nome;
    }

    Carro() {
        velMax = 120;
        potencia = 85;
        nome = "Popular";
    }

    Carro(int potencia, const char* nome):potencia(potencia), nome(nome) {
        if(potencia < 100) {
            velMax = 120;
        }else if(potencia < 200){
            velMax = 240;
        }else {
            velMax = 360;
        }
    }
};

int main() {

    Carro c1;
    cout << c1.getNome() << " - " << c1.potencia << " - " << c1.getVelMax() << endl;
    

    Carro c2{180, "Luxo"};
    cout << c2.getNome() << " - " << c2.potencia << " - " << c2.getVelMax() << endl;
    
    Carro c3{300, "Esportivo"};
    cout << c3.getNome() << " - " << c3.potencia << " - " << c3.getVelMax() << endl;

    return 0;
}