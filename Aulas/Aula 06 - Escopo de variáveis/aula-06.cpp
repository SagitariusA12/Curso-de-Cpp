#include <iostream>
#include <locale.h> //Acentos
#include <cmath> // Lib de matem�tica
using namespace std;

// Vari�vel GLOBAL pode ser utilizada por todo o c�digo
//unsigned long long int n1{7}, n2{};
int n1 = 11, n2 = 3;


int main(){
    setlocale(LC_ALL, ""); //UTF-8
    // VAri�vel LOCAL, apenas pela fun��o "main"
    int n3 = 5, n4 = 2;

    // Operadores matem�ticos: +, -, /, *, %, (). Preced�ncia de opera��es
    int res;

    //res = (n1 + n2 + n3 + n4) - 10;
    //res = n1 + n2 * n4 + pow(n3, n4);
    res = n1 / n2;

    cout << "O valor �: " << res;
    return 0;
}
