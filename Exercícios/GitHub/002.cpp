/*
Faça um Programa que peça um número e então mostre a mensagem O número
informado foi [número]. 
*/

#include <iostream>
#include <locale.h> //Acentos
using namespace std;


int main(){
    setlocale(LC_ALL, "");
    int number;

    cout << "Informe um número: ";
    cin >> number;
    cout << "O números informado foi: " << number;

    return 0;
}