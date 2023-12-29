/*
Faça um Programa que converta metros para centímetros.
*/
#include <iostream>
#define PI 3.1445

using namespace std;

int main(){
    float cm;
    float m;

    cout << "Informe a quantidade de centímetros: ";
    cin >> cm;

    m = cm / 100.0;
    cout << cm << "centímetros em metros é: " << m << " m";
    return 0;
}