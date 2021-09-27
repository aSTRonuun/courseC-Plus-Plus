#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

#include "Veiculo.h"

class Moto: public Veiculo {
public:
    Moto(){
        velMax = 200;
        rodas = 2;
        setNome("Moto");
        setCor("Preto");
    }
};



#endif