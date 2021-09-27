#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo {
private:
    const char* nome;
    const char* cor;
public:
    int velMax;
    int rodas;

    void setNome(const char* nome){
        this->nome = nome;
    }

    void setCor(const char* cor){
        this->cor = cor;
    }

    const char* getNome(){
        return  nome;
    }

    const char* getCor(){
        return cor;
    }

    // Adicionar palavra reservada virtual para dizer ao compilador que o método pode ser polimorfizado  
    virtual void toString(){
        std::cout << "Nome............: " << nome << std::endl;
        std::cout << "Cor.............: " << cor << std::endl;
        std::cout << "Rodas...........: " << rodas << std::endl;
        std::cout << "Vel. Max........: " << velMax << std::endl << std::endl;
    }
};


#endif