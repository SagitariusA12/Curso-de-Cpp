#include <iostream>
#include <locale.h> //Acentos
#include <cmath> // Lib de matemática
using namespace std;

// Variável GLOBAL pode ser utilizada por todo o código
//unsigned long long int n1{7}, n2{};
int n1 = 11, n2 = 3;


int main(){
    setlocale(LC_ALL, ""); //UTF-8
    // VAriável LOCAL, apenas pela função "main"
    int n3 = 5, n4 = 2;

    // Operadores matemáticos: +, -, /, *, %, (). Precedência de operações
    int res;

    //res = (n1 + n2 + n3 + n4) - 10;
    //res = n1 + n2 * n4 + pow(n3, n4);
    res = n1 / n2;

    cout << "O valor é: " << res;
    return 0;
}
