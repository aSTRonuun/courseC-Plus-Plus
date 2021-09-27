#include <iostream>

using namespace std;

int main() {


    int vidas = 5; //10, 25
    char letra = 'a'; // 'a'
    float decimal1 = 5.3; // 2.49999
    double decimal2 = 4.2; //2.5
    bool vivo = true; // true = verdadiero, false = falso
    string nome = "Vitor"; // "Vitor"

    cout << "Digite numero de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Dinheiro: ";
    cin >> decimal1;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal1 << "\n";
    cout << decimal2 << "\n";
    cout << nome << "\n";
}