#include <iostream>

using namespace std;

int main()
{
    // Declaração das variáveis para os coeficientes da equação de segundo grau
    int incognitaA;
    int incognitaB;
    int incognitaC;
    
    // Solicita ao usuário que insira os valores de A, B e C
    cout << "Na equacao do 2o grau, apresente respectivamente o valor de A, B e C:" << endl;
    cout << "Valor de A: ";
    cin >> incognitaA;
    cout << "Valor de B: ";
    cin >> incognitaB;
    cout << "Valor de C: ";
    cin >> incognitaC;
    
    // Calcula o discriminante (delta) da equação quadrática
    int discriminante = ((incognitaB * incognitaB) - (4 * incognitaA * incognitaC));
    
    // Exibe o valor do discriminante
    cout << "Discriminante: " << discriminante << endl;
    
    // Determina e exibe a natureza das raízes da equação quadrática com base no discriminante
    if (discriminante > 0 ) {
        cout << "A equacao tem duas raizes reais diferentes." << endl; 
    } else if (discriminante == 0) {
        cout << "A equacao tem uma raiz real unica." << endl;
    } else if (discriminante < 0 ) {
        cout << "A equacao nao tem raizes reais." << endl;
    } else {
        cout << "Erro." << endl;
    }
       
    return 0;
}
