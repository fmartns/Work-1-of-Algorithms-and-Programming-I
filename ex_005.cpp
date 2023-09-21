#include <iostream>

using namespace std;

int main(){

    cout << "Informe as tres medidas do triangulo." << endl;
    float m1;
    cout << "Primeira medida: ";
    cin >> m1;

    float m2;
    cout << "Segunda medida: ";
    cin >> m2;

    float m3;
    cout << "Terceira medida: ";
    cin >> m3;

    if ((m1 + m2) < m3 || (m1 + m3) < m2 || (m2 + m3) < m1) {
        cout << "Nao e um triangulo";
    }
    else if (m1 == m2 && m2 == m3) {
        cout << "O triangulo e equilatero.";
    }
    else if (m1 == m2 || m2 == m3 || m1 == m3) {
        cout << "O triangulo e isosceles";
    }
    else {
        cout << "O triangulo e escaleno";
    }

    return 0;
}
