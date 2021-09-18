#include <iostream>

using namespace std;

int main() {

    int l, c;
    cin >> l >> c;

    int matriz[l][c];

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}