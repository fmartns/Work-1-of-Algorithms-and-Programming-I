#include <iostream>

using namespace std;

// Algoritimo para calcular a posição de um objeto em função de tempo conforma a equação horária da posição.

int main(){
    
// Captando valores, utilizando as váriaveis de tipo "float" para permitir números decimais.

    float vi;
    cout << "Velocidade inicial (km/h): ";
    cin >> vi;
    float vf;
    cout << "Velocidade Final (km/h): ";
    cin >> vf;
    float ac;
    cout << "Aceleracao (m/s): ";
    cin >> ac;
    float pi;
    cout << "Posicao inicial (m): ";
    cin >> pi;

// Convertnedo os valores de km/h por metros por segundo 

    vi = vi / 3.6;
    vf = vf / 3.6;

// Realizando a equação:

    cout << "(" << vf << "-" << vi << ")" << "/" << ac << endl;

    float t = ((vf - vi) / ac);

    cout << t << endl;

    float s = pi + vi * t - ac * (t * t) / 2;

// Apresentando resultado:

    cout << "Resultado: " << s;

    return 0;
}