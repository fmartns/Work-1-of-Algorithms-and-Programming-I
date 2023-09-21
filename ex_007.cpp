#include <iostream>

using namespace std;

int main()
{
    int incognitaA;
    int incognitaB;
    int incognitaC;
    
    cout << "Na equacao do 2o grau, apresente respectivamente o valor de A, B e C:" << endl;
    cout << "Valor de A: ";
    cin >> incognitaA;
    cout << "Valor de B: ";
    cin >> incognitaB;
    cout << "Valor de C: ";
    cin >> incognitaC;
    
    int discriminante = ((incognitaB * incognitaB) - (4 * incognitaA * incognitaC));
    
    cout << "Discriminante: " << discriminante << endl;
    
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
