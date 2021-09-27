#include <iostream>

using namespace std;

int main() {

    int count = 0;

    while(count<10) {
        cout << "Iterador == " << count << endl;
        if(count == 10) {
            break;
        }

        count++;
    }

    return 0;
}