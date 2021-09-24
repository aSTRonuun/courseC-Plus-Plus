#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo {

    public:
        int vel;
        int tipo;
        
        Veiculo(int tp);
        int getVelMax();
        bool getLigado();
        void setLigado(int l);
    private:
        std::string nome;
        int velMax;
        bool ligado;

        void setVelMax(int vm);
};

Veiculo::Veiculo(int tp) { //1 - Aviao, 2 - Carro, 3 - Navio
    tipo = tp;
    setLigado(0);
    
    switch (tipo)
    {
    case 1:
        nome = "Carro";
        setVelMax(200);
        break;
    case 2:
        nome = "Aviao";
        setVelMax(800);
        break;
    case 3:
        nome = "Navio";
        setVelMax(180);
        break;
    default:
        break;
    }
}

int Veiculo::getVelMax() {
    return velMax;
}

void Veiculo::setVelMax(int vm) {
    velMax = vm;
}

bool Veiculo::getLigado() {
    return ligado;
}

void Veiculo::setLigado(int l) {
    if(l == 1) {
        ligado = true;
    }else {
        ligado = false;
    }
}


#endif