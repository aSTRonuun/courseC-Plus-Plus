#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

#include "Veiculo.h"

class Carro: public Veiculo {
public:
    Carro(){
        velMax = 160;
        rodas = 4;
        setNome("Carro");
        setCor("Branco");
    }
};


#endif