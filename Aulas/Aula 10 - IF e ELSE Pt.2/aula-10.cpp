#include <iostream>
#include <locale.h> //Acentos
#include <cstdlib>

using namespace std;

int main(){
    setlocale(LC_ALL, ""); //UTF-8 no início da função
    float n1, n2, res;
    char opc;

    inicio: // Label
    system("cls"); //Limpar a tela

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = (n1 + n2) / 2.0;

    /*
    Aprovado >= 60
    60 > Recuperação >= 40
    Reprovado < 40
    */
    if(res >= 60){
        cout << "Aprovado: " << res << "\n\n";
    }
    else if(res >= 40 && res < 60){
        cout << "Recuperação: " << res << "\n\n";
    }
    else{
        cout << "Reprovado: " << res << "\n\n";
    }

    cout << "Você deseja inserir outras notas? [s/n] ";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }

    return 0;
}
