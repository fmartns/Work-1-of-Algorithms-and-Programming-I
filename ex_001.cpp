#include <iostream>

using namespace std;

int main() {

    double posicaoInicial;
    cout << "Posicao inicial (m/s): ";
    cin >> posicaoInicial;
    
    double velocidadeInicial;
    cout << "Velocidade inicial (Km/h): ";
    cin >> velocidadeInicial;
    
    velocidadeInicial = velocidadeInicial / 3.6;
    
    double aceleracao;
    cout << "Aceleracao (m/s): ";
    cin >> aceleracao;
    
    double tempo;
    cout << "Tempo (s): ";
    cin >> tempo;
    
    double S = posicaoInicial + velocidadeInicial * tempo + 0.5 * aceleracao * (tempo * tempo);
    
    cout << "A posicao no instante " << tempo << " e: " << S << " metros." << endl;
    
    return 0;
}
