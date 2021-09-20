#include <iostream>

using namespace std;

int fatorial_recursivo(int n);
void fibonacci_recursivo(int n, int anterior = 0, int atual = 1);

int main() {


    //int resultado = fatorial_recursivo(8);
    //cout << resultado;

    fibonacci_recursivo(50);
}

int fatorial_recursivo(int n) {
    if(n == 0){
        return 1;
    }
    return n * fatorial_recursivo(n - 1);
}

void fibonacci_recursivo(int n, int anterior, int atual) {
    int proximo = anterior + atual;
    if(anterior < n){
        cout << anterior << " ";
        anterior = atual;
        atual = proximo;
        fibonacci_recursivo(n, anterior, atual);
    }
}
