#include <iostream>

using namespace std;

int main(){

    // Solicita ao usuário que insira os ângulos do triângulo
    cout << "Digite os três ângulos do triângulo. " << endl;
    float angulo1;
    cout << "Primeiro ângulo: ";
    cin >> angulo1;

    float angulo2;
    cout << "Segundo ângulo: ";
    cin >> angulo2;

    float angulo3;
    cout << "Terceiro ângulo: ";
    cin >> angulo3;

    // Verifica se a soma dos ângulos é igual a 180 graus
    if ((angulo1 + angulo2 + angulo3) == 180) {
        // Verifica o tipo de triângulo com base nos ângulos
        if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90) {
            cout << "Triângulo Acutângulo";
        }
        else if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
            cout << "Triângulo Retângulo";
        }
        else {
            cout << "Triângulo Obtusângulo";
        }
    }
    else {
        cout << "Os valores não formam um triângulo.";
    }

    return 0;
}
