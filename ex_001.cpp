#include <iostream>

using namespace std;

int main(){

    // Solicita ao usuário que insira informações sobre o movimento
    float vi;
    cout << "Velocidade inicial (km/h): ";
    cin >> vi;
    float vf;
    cout << "Velocidade Final (km/h): ";
    cin >> vf;
    float ac;
    cout << "Aceleração (m/s²): ";
    cin >> ac;
    float pi;
    cout << "Posição inicial (m): ";
    cin >> pi;

    // Converte as velocidades de km/h para m/s
    vi = vi / 3.6;
    vf = vf / 3.6;

    // Calcula o tempo de movimento usando a fórmula (vf - vi) / ac
    float t = ((vf - vi) / ac);

    // Calcula a posição final usando a fórmula s = pi + vit + (1/2)at^2
    float s = pi + vi * t - (ac * t * t) / 2;

    // Exibe o tempo e a posição final calculados
    cout << "Tempo de movimento: " << t << " segundos" << endl;
    cout << "Posição final: " << s << " metros" << endl;

    return 0;
}
