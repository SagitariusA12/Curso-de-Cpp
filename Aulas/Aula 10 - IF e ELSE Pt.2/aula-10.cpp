#include <iostream>
#include <locale.h> //Acentos
#include <cstdlib>

using namespace std;

int main(){
    setlocale(LC_ALL, ""); //UTF-8 no in�cio da fun��o
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
    60 > Recupera��o >= 40
    Reprovado < 40
    */
    if(res >= 60){
        cout << "Aprovado: " << res << "\n\n";
    }
    else if(res >= 40 && res < 60){
        cout << "Recupera��o: " << res << "\n\n";
    }
    else{
        cout << "Reprovado: " << res << "\n\n";
    }

    cout << "Voc� deseja inserir outras notas? [s/n] ";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }

    return 0;
}
