#include <iostream>

using namespace std;

int main(){
    // Tipo e nome
    // Tipo e nome = valor

    /* */ // COment�rio de v�rias linhas

    int vendas{5000};
    unsigned short int vidas{20}; // 10, 25, 100...
    char letra =  'N'; // Uma letra e um apo�strfo: 'b', 'Z', 'K'
    char letras[20]; // Passa a ser um vetor com at� 20 car�cteres
    long double decimal = 2.499; // Valores reais. 2.5, 1.3333, 10.0. 2.499999999
    float decimal2 = 2.499; // Igual ao double, mas com uma precis�o menor. 2.5
    bool vivo = true; // Apenas true ou false
    string nome = "Ruan Davy\n"; //Recebe um texto . Entre Aspas
    //void
    /*cout << "Informe a quantidade de vidas: ";
    cin >> vidas;*/

    cout << nome << vendas;
    return 0;
}
