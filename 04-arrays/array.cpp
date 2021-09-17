#include <iostream>

using namespace std;

int main() {

    int size = 10;
    int array[size];

    for(int i=0; i < size; i++){
        cin >> array[i];
    }

    for(int i=0; i < size; i++){
        cout << "O valor na posicao " << i << " do array eh igual a " << array[i] << endl;
    }

    return 0;
}