#include <iostream>

using namespace std;

int n1, n2;


int main() {

    // Operadores Matemáticos + - / * % ()

    int n3, n4;
    int sum = 0, sub = 0, mult = 0, div = 0, rest = 0;

    n1 = 12;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    sum = n1 + n2;
    sub = n2 - n4;
    mult = n3 * n2;
    div = n1 / n4;
    rest = n1 % n3;

    
    cout << sum << endl;
    cout << sub << endl;
    cout << mult << endl;
    cout << div << endl;
    cout << rest << endl;
}