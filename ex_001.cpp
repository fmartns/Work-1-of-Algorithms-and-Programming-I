#include <iostream>

using namespace std;

int main(){
    
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

    vi = vi / 3.6;
    vf = vf / 3.6;

    float t = -((vf - vi) / ac);

    float s = pi + vi * t - ac * (t * t) / 2;

    cout << "Resultado: " << s;

    return 0;
}