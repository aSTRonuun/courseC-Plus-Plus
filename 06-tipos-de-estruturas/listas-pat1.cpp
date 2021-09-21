#include <iostream>
#include <list>

/*
    Métodos
        - push_front(): Adicionar um elemento em cima
        - push_back(): Adicionar um elemento em baixo
        - pop_front(): Remover um elemento de cima
        - pop_back(): Remover um elemento em baixo
        - size(): Retornar a quantidade de elementos
        - front(): Retornar o elemento de cima
        - back(): Retornar o elemento de baixo
        - empty(): Retornar o teste se a fila tem elementos ou não
        - sort(): Ordenar os elementos da lista
        - reverse(): Inventer a ordem dos lementos da lista
*/


using namespace std;

int main() {

    list<int> aula, teste;
    list<int>::iterator it;
    int tam = 10;

    teste.push_front(0);
    teste.push_front(0);
    teste.push_front(7);

    for(int i=0; i<tam; i++) {
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);

    aula.erase(--it);

    //aula.clear();
    aula.merge(teste);

    
    cout << "O tamanho da lista: " << aula.size() << endl << endl;

    for(int i=0; i<tam; i++) {
        cout << aula.front() << endl;
        aula.pop_front();
    }



    return 0;
}