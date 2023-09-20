#include <iostream>

using namespace std;

int main(){

    // Exibe uma mensagem inicial para o usuário
    cout << "Calculadora de Porção" << endl;

    // Declaração de variáveis para o número de convidados de cada grupo
    int a;
    cout << "Informe quantos convidados A (pessoas que comem até 300g) vão comparecer: ";
    cin >> a;

    int b;
    cout << "Informe quantos convidados B (pessoas que comem até 1500g) vão comparecer: ";
    cin >> b;

    int c;
    cout << "Informe quantos convidados C (pessoas que comem até 600g) vão comparecer: ";
    cin >> c;

    // Cálculo da quantidade total de comida necessária em gramas
    a = a * 300;   // Convidados A comem até 300g
    b = b * 1500;  // Convidados B comem até 1500g
    c = c * 600;   // Convidados C comem até 600g

    int porcao = a + b + c; // Total de comida necessário em gramas
    
    // Exibe a quantidade ideal de comida para os convidados informados
    cout << "A porção ideal para os convidados informados é de " << porcao << " gramas";

    return 0;
}
