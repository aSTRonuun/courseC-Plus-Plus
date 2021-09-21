#include <iostream>
#include <stack>

/*
    Métodos
        - push: adicionar elemento
        - pop: remover elemento
        - top: retornar o elemento do topo
        - size: retornar a quantidade de elementos
        - empty: retornar o teste se está vazia ou não
*/

using namespace std;

int main() {

    stack <string> cartas;

    // Adiciona um elemento na stack
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");

    if(cartas.empty())
        cout << "Pilha vazia" << endl;
    else
        cout << "Pilha com cartas" << endl;

    cout << "O tamanho da pilha: " <<  cartas.size() << endl;

    cout << "Carta do topo: " << cartas.top() << endl;

    // Remove um elemento na stack
    cartas.pop();

    cout << "O tamanho da pilha: " <<  cartas.size() << endl;

    cout << "Nova carta do topo: " << cartas.top() << endl;

    while(!cartas.empty()) {
        cout << "Carta do topo a ser removida: " << cartas.top() << endl;
        cartas.pop();
    }

    if(cartas.empty())
        cout << "Pilha vazia" << endl;
    else
        cout << "Pilha com cartas" << endl;

    return 0;
}