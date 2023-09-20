#include <iostream>

using namespace std;

int main(){

    // Solicita ao usuário que insira três valores
    float num1;
    cout << "Digite o primeiro valor: ";
    cin >> num1;

    float num2;
    cout << "Digite o segundo valor: ";
    cin >> num2;

    float num3;
    cout << "Digite o terceiro valor: ";
    cin >> num3;

    // Verifica e calcula a mediana entre os três valores |
    if (num1 > num2 && num1 > num3) {
        if (num2 > num3) {
            cout << "A mediana entre os três números é " << num2;
        }
        else {
            cout << "A mediana entre os três números é " << num3;
        }
    }
    else if (num2 > num1 && num2 > num3) {
        if (num1 > num3) {
            cout << "A mediana entre os três números é " << num1;
        }
        else {
            cout << "A mediana entre os três números é " << num3;
        }
    }
    else {
        if (num1 > num2) {
            cout << "A mediana entre os três números é " << num1;
        }
        else {
            cout << "A mediana entre os três números é " << num2;
        }
    }
    
    return 0;
}
