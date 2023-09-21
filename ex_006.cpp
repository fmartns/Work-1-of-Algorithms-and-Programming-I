#include <iostream>

using namespace std;

int main(){

    cout << "Digite os tres angulos do triangulo. " << endl;
    float angulo1;
    cout << "Primeiro angulo: ";
    cin >> angulo1;

    float angulo2;
    cout << "Segundo angulo: ";
    cin >> angulo2;

    float angulo3;
    cout << "Terceiro angulo: ";
    cin >> angulo3;

    // Verifica se a soma dos angulos é igual a 180 graus
    if ((angulo1 + angulo2 + angulo3) == 180) {
        // Verifica o tipo de triangulo com base nos angulos
        if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90) {
            cout << "Triangulo Acutangulo";
        }
        else if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
            cout << "Triangulo Retangulo";
        }
        else {
            cout << "Triangulo Obtusangulo";
        }
    }
    else {
        cout << "Os valores nao formam um triangulo.";
    }

    return 0;
}
