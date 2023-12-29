/*
Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/
#include <iostream>
using namespace std;

int main(){
    float n1, n2, n3, n4;
    cout << "Informe a primeira nota: " << endl;
    cin >> n1;
    cout << "Informe a segunda nota: " << endl;
    cin >> n2;
    cout << "Informe a terceira nota: " << endl;
    cin >> n3;
    cout << "Informe a quarta nota: " << endl;
    cin >> n4;

    cout << "A média foi: " << (n1 + n2 + n3 + n4) / 4.0;

    return 0;
}