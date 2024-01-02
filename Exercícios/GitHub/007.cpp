/*
Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro
desta área para o usuário.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float side, area;

    cout << "Informe o lado do quadrado: ";
    cin >> side;

    area = pow(side, 2);
    cout << area << endl;
    cout << "O dobro da área do quadrado de lado: " << side << " . Vale: " << area * 2;
  
    return 0;
}