#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
    public:
        int vel=0;
        int velMax;
        std::string tipo;
        Aviao(int tp);
        void imprimir();
    private:

};

Aviao::Aviao(int tp) {
    switch (tp)
    {
    case 1:
        velMax = 800;
        tipo = "Jato";
        break;
    case 2:
        velMax = 350;
        tipo = "Monomotor";
        break;
    case 3:
        velMax = 180;
        tipo = "Planador";
        break;
    default:
        break;
    }
}

void Aviao::imprimir() {
    std::cout << "Tipo.............: " << tipo << std::endl;
    std::cout << "Velocidade maxima: " << velMax << std::endl;
    std::cout << "Velocidade atual.: " << vel << std::endl;
}

#endif