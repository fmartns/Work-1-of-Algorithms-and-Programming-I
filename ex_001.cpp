#include <iostream>

using namespace std;

int main() {
    // Declaração de variáveis
    double posicaoInicial;
    cout << "Posicao inicial (m/s): ";
    cin >> posicaoInicial;
    
    double velocidadeInicial;
    cout << "Velocidade inicial (Km/h): ";
    cin >> velocidadeInicial;
    
    // Converter velocidade inicial de Km/h para m/s
    velocidadeInicial = velocidadeInicial / 3.6;
    
    double aceleracao;
    cout << "Aceleracao (m/s): ";
    cin >> aceleracao;
    
    double tempo;
    cout << "Tempo (s): ";
    cin >> tempo;
    
    // Cálculo da posição usando a equação de movimento uniformemente acelerado
    double S = posicaoInicial + velocidadeInicial * tempo + 0.5 * aceleracao * (tempo * tempo);
    
    // Exibir o resultado
    cout << "A posicao no instante " << tempo << " e: " << S << " metros." << endl;
    
    return 0;
}
