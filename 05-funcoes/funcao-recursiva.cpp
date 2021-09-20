#include <iostream>

using namespace std; 

void contador(int num);
void contador_recursivo(int num, int count=0);

int main() {


    contador(10);
    contador_recursivo(20);

    return 0;
}

void contador(int num) {
    for(int i=0; i<num; i++) {
        cout << i << endl;
    }
}

void contador_recursivo(int num, int count) {
    cout << count << endl;
    if(count < num){
        contador_recursivo(num, ++count);
    }
}