/*
Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
*/
#include <iostream>
#include <cmath>
#define pi 3.1415

using namespace std;

int main(){
    unsigned short int radius;
    float area;

    cout << "Informe o raio do círculo: ";
    cin >> radius;

    area = pi * pow(radius, 2);

    cout << "A área vale: " << area << " u²";
    return 0;
}