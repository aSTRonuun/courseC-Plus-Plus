#include <iostream>

using namespace std;

class Aviao {

    public:

        int vel = 0;
        int velMax;
        string tipo;

        void ini(int tipo);


    private:

};

void Aviao::ini(int tipo){

    switch (tipo)
    {
    case 1:
        this->velMax = 800;
        this->tipo = "Jato";
        break;
    case 2:
        this->velMax = 350;
        this->tipo = "Monomotor";
        break;
    case 3:
        this->velMax = 180;
        this->tipo = "Planador";
        break;
    default:
        cout << "Tipo Invalido";
        break;
    }
}

int main() {

    Aviao *aviao1 = new Aviao();
    Aviao *aviao2 = new Aviao();

    aviao1->ini(5);
    aviao2->ini(2);

    cout << aviao1->velMax << endl;
    cout << aviao1->tipo;

    cout << endl;

    cout << aviao2->velMax << endl;
    cout << aviao2->tipo;

    return 0;
}