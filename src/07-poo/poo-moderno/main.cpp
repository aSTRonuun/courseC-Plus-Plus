#include <iostream>
#include <memory>

using namespace std;

class Carro{
private:
    int velMax;

    void setVelMax(int velMax) {
        this->velMax = velMax;
    }

public:
    int potencia;
    const char* nome;

    Carro(const char* nome, int potencia):nome(nome), potencia(potencia) {
        if(potencia < 100){
            setVelMax(120);
        }else if(potencia < 200) {
            setVelMax(220);
        }else{
            setVelMax(350);
        }
    }

    int getVelMax() {
        return velMax;
    }
};




int main() {

    
    //Inicializaco com NEW

    Carro *carro = new Carro("Tesla Model S", 90);
    cout << carro->nome << " - " << carro->potencia << " - " << carro->getVelMax() << endl;

    delete carro;
    

    //Inicializacao com inicializacao uniforme

    Carro carro1{"Tesla Model 3", 160};
    cout << carro1.nome << " - " << carro1.potencia << " - " << carro1.getVelMax() << endl;


   // Inicializacao com Smart Pointer

   unique_ptr<Carro> carro2 (new Carro{"Tesla Model X", 300});
   cout << carro2->nome << " - " << carro2->potencia << " - " << carro2->getVelMax() << endl;



    return 0;
}