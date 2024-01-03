#include <iostream>
using namespace std;

int main(){
    int num1{10};
    int num2 = 50;
    int sol = 0;
    //char opc = 's';

    /*
    se(dia de sol){
        vou ao clube;
    } 
    senão{
        não vou ao clube;
    }
    */

    // Operadores de comparação
    // >, <, >=, <=, ==, !=
    // 10 < 5 = false
    // 50 > 25 = true
    // 100 >= (50 * 2) = true
    // num > 0 = true
    // num < 10 = false
    // num >= 10 = true

    // if(num1 > num2){
    //     cout << "VERDADEIRO";
    // }
    // else{
    //     cout << "FALSO";
    // }

    // if(sol == 1){
    //     cout << "Vou ao cinema";
    // }
    // else{
    //     cout << "Não vou ao cinema";
    // }

    // true == 1; false == 0;
    if(num1){
        cout << "Vou ao cinema";
    }
    else{
        cout << "Não vou ao cinema";
    }

    return 0;
}