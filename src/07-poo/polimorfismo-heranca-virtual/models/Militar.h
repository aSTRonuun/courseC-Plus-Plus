#ifndef MILITAR_H_INCLUDED
#define MILITAR_H_INCLUDED

#include "Veiculo.h"

class Militar:public Veiculo {
public:
    int monicao;
    bool armamento;
    Militar(bool arma, int monicao): armamento(arma), monicao(monicao) {
        velMax = 150;
        rodas = 6;
        setNome("Tanque");
        setCor("Verde");
        if(arma)
            this->monicao = monicao;
        else
            this->monicao = 0;      
    }

    // Adicionar palavra reservada override para dizer ao compilador que o método esta polimorfizado
    void toString() override {
        std::cout << "Nome............: " << getNome() << std::endl;
        std::cout << "Cor.............: " << getCor() << std::endl;
        std::cout << "Rodas...........: " << rodas << std::endl;
        std::cout << "Vel. Max........: " << velMax << std::endl;
        std::cout << "Armamento.......: " << armamento << std::endl;
        std::cout << "Monicao.........: " << monicao << std::endl << std::endl;
    }
};




#endif