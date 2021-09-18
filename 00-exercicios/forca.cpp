#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {


    char palavra[30], letra, secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances=6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    system("cls");
    cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta" << endl << "> ";
    cin >> palavra;
    
    while(palavra[i] != '\0'){
        tam++;

        i++;
    }

    for(i=0; i<tam; i++){
        secreta[i] = '*';
    }

    while(chances > 0 && acertos < tam) {

        cout << endl << "Chances restantes: " << chances << endl << endl;

        for(i=0; i<tam; i++){
            cout << secreta[i] << " ";
        }

        cout << endl << endl << "Digite uma letra" << endl << "> ";
        cin >> letra;

        for(i = 0; i<tam; i++){
            if(letra == palavra[i]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if(!acerto) {
            chances--;
        }
        acerto = false;
        system("cls");
    }

    if(acertos == tam)
        cout << "Você venceu!";
    else
        cout << "Que pena, voce perdeu.";
}