/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/

#include <iostream>
using namespace std;

int main(){
    float value, hours, wage;
    cout << "Informe o quanto você ganha por hora: ";
    cin >> value;
    cout << "Informe quantas horas você trabalha num mês: ";
    cin >> hours;

    wage = hours * value;

    cout << "Você ganha por mês: R$ " << wage;

    return 0;
}