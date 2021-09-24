#include <iostream>
#include <stdexcept>

using namespace std;

double divide(double, double);


int main() {

    double n1, n2;

    cin >> n1 >> n2;

    try{
        cout << divide(n1, n2);
    }catch(const char* e){
        cout << "ERROR: " << e << endl;
    }


    return 0;
}

double divide(double n1, double n2) {
    if(n2 == 0){
        throw "Erro de divisao por ZERO";
    }
    
    return n1 / n2;
}