/*
Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre
em graus Farenheit.
*/
#include <iostream>
using namespace std;

int main(){
    float celsius, farenheit;

    cout << "Informe a temperatura em Celsius: ";
    cin >> celsius;

    farenheit = (9 * celsius) / 5 + 32;

    cout << "A temperatura em  Farenheit é: " << farenheit << " ºF";
    return 0;
}