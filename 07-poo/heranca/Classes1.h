#ifndef CLASSES1_H_INCLUDED
#define CLASSES1_H_INCLUDED


class Veiculo {
public:
    int velocidade;
    int blindagem;
    int rodas;
    
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imprimir();
private:
    int tipo;
    int velMax;
    bool arma;

};

void Veiculo::setTipo(int tp) {
    tipo = tp;
}

void Veiculo::setVelMax(int vm) {
    velMax = vm;
}

void Veiculo::setArma(bool ar) {
    arma = ar;
}

void Veiculo::imprimir() {
    std::cout << "Tipo veiculo.....: " << tipo << std::endl;
    std::cout << "Velocidade maxima: " << velMax << std::endl;
    std::cout << "Qtde rodas.......: " << rodas << std::endl;
    std::cout << "Blindagem........: " << blindagem << std::endl;
    std::cout << "Armamento........: " << arma << std::endl;
    std::cout << "--------------------------------"<< std::endl;
}

class Moto:public Veiculo {
public:
    Moto();
private:
};

Moto::Moto() {
    velocidade = 0;
    blindagem = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}

class Carro:public Veiculo {
public:
    Carro();
};

Carro::Carro() {
    velocidade = 0;
    blindagem = 0;
    rodas = 4;
    setTipo(2);
    setVelMax(200);
    setArma(false);
}

class Tanque:public Veiculo {
public:
    Tanque();
};

Tanque::Tanque() {
    velocidade = 0;
    blindagem = 1;
    rodas = 8;
    setTipo(4);
    setVelMax(180);
    setArma(true);
}


#endif