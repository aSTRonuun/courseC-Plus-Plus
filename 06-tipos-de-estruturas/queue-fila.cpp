#include <iostream>
#include <queue>

using namespace std;

/*
    Métodos
        - push(): Adicionar um elemento
        - pop(): Remover um elemento
        - size(): Retornar a quantidade de elementos
        - front(): Retornar o primeiro elemento da fila
        - back(): Retornar o último elemento da fila
        - empty(): Retornar o teste se a fila tem elementos ou não
*/

int main() {

    queue <string> cartas;

    // Adiciona um elemento na queue
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;
    cout << "Primeira carta: " << cartas.front() << endl;
    cout << "Ultimo da fila: " << cartas.back() << endl << endl;

    while(!cartas.empty()) {
        cout << "Primeira Carta: " << cartas.front() << endl;
        cartas.pop();
    }
}