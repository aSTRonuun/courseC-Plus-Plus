#include <iostream>
#include <cstdlib>


using namespace std;

int main () {

    int n1, n2,  result;
    char opc;

    inicio:

    system("cls");

    cout << "Digitee o valor da nota 1: ";
    cin >> n1;

    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    result = n1 + n2;

    if(result >= 60) {
        cout << "Aluno aprovado" << endl;
    }else if(result >= 40) {
        cout << "Aluno em Recuperacao" << endl;
    }else {
        cout << "Aluno Reprovado" << endl;
    }

    cout << "\nDigitar outras notas?[s/n]: ";
    cin >> opc;

    if(opc == 's' || opc == 'S') {
        goto inicio;
    }


}