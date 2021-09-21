#include <iostream>

using namespace std;

int main() {

    enum armas{fuzil=50, revolver=8, rifle=12, escopeta=2};
    armas armaSel;

    armaSel = rifle;

    cout << armaSel;

    return 0;
}