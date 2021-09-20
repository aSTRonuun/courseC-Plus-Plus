#include <iostream>

using namespace std;

// Um valor padrão pode ser atribuido na hora de dizer os métodos da funcao
void impressao(string txt="Nao ha nada para imprimir!");

int main () {

    impressao("Hello World");
    impressao();


    return 0;
}

void impressao(string txt) {
    cout << endl << txt << endl;
}