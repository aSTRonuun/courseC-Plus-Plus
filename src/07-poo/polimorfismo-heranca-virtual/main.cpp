#include <iostream>
#include ".\models\Carrro.h"
#include ".\models\Moto.h"
#include ".\models\Militar.h"

using namespace std;

int main() {

    Carro v1;
    v1.toString();

    Moto v2;
    v2.toString();

    Militar v3{false, 200};
    v3.toString();

    Militar v4{true, 350};
    v4.toString();



    return 0;
}