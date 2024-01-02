/*
Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre
a temperatura em graus Celsius.
C = (5 * (F-32) / 9).
*/

#include <iostream>
using namespace std;

int main(){
    float  farenheit, celsius;

    cout << "Informe a temperatura em  Farenheit: ";
    cin >>  farenheit;

    celsius = (5 * (farenheit - 32) / 9);

    cout << "A temperatura em Celsius é: " << celsius << " ºC";

    return 0;
}