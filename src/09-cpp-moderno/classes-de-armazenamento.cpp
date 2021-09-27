#include <iostream>
#include <vector>

using namespace std;

int main() {

    // auto = automaticamente o c++ entende de qual tipo a variávei é.

    vector<int> v{10,20,30,40,50,60,70};

    for(register auto it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }

    /* register = pede para o SO, se possível, armazenar a variavel em um registrador,
    pois, a velocidade de acesso é bem maior do que na memória ram. 

    O melhor caso para se usar o register é para as variaveis contadoras    
    */

   register int cont;

   for(cont =0; cont<10; cont++) {
       cout << cont << endl;
   }

    return 0;
}