#include <iostream>

using namespace std;

int main(){

    // Solicita ao usuário que insira as medidas do triângulo
    cout << "Informe as três medidas do triângulo." << endl;
    float m1;
    cout << "Primeira medida: ";
    cin >> m1;

    float m2;
    cout << "Segunda medida: ";
    cin >> m2;

    float m3;
    cout << "Terceira medida: ";
    cin >> m3;

    // Verifica se as medidas formam um triângulo
    if ((m1 + m2) < m3 || (m1 + m3) < m2 || (m2 + m3) < m1) {
        cout << "Não é um triângulo";
    }
    else if (m1 == m2 && m2 == m3) {
        cout << "O triângulo é equilátero.";
    }
    else if (m1 == m2 || m2 == m3 || m1 == m3) {
        cout << "O triângulo é isósceles";
    }
    else {
        cout << "O triângulo é escaleno";
    }

    return 0;
}
