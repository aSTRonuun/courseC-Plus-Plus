#include <iostream>
#include <cstdlib>


using namespace std;

int main () {

    int n1, n2,  result;
    char opc;
    string res;

    inicio:

    system("cls");

    cout << "Digitee o valor da nota 1: ";
    cin >> n1;

    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    result = n1 + n2;

    // (result >= 70) ? res = "Aluno aprovado" : res = "Aluno reprovado";

    res = (result >= 70) ? "Aprovado" : "Reprovado";

    cout << res;

    cout << "\nDigitar outras notas?[s/n]: ";
    cin >> opc;

    if(opc == 's' || opc == 'S') {
        goto inicio;
    }


}