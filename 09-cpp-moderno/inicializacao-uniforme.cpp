#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
public:
    int tipo;
    string nome;
};

int main() {

    int num{10};
    string nome{"Bruno"};
    vector<int> valores{2,4,6,8,10,12};
    map<string,string> capitais{{"MG", "Belo Horizonte"}};

    Pessoa p1{"Vitor", 20};
    Pessoa p2{"Adriele", 19};

    Veiculo v1{1, "Ferrari"};

    cout << nome << endl;

    for(vector<int>::iterator it=valores.begin(); it!=valores.end();it++) {
        cout << *it << endl;
    }

    for(map<string, string>::iterator it=capitais.begin(); it != capitais.end(); it++) {
        cout << it->first << " - " << it->second << endl;
    }

    cout << v1.nome << " - " << v1.tipo << endl;

    return 0;
}