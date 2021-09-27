#include <iostream>

using namespace std;


// Um mesmo nome pode ser atribuido a mais de uma funcao desde que tenha argumentos diferentes - Sobrecarga
void soma(int x, int y);
void soma();

int main() {

    soma(10, 40);
    soma();
}

void soma(int x, int y) {
    cout << endl << "A soma de " << x << " e " <<  y << " eh igual a " << x + y << endl; 
}

void soma() {
    int x = 10, y = 20;
    cout << endl << "A soma de " << x << " e " <<  y << " eh igual a " << x + y << endl; 
}