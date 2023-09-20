#include <iostream>

using namespace std;

int main(){
    
    // Declaração de variáveis para armazenar os valores de peso e comprimento
    float p1;
    cout << "Peso crianca (lado direito): ";
    cin >> p1;

    float c1;
    cout << "Comprimento balanca (lado direito): ";
    cin >> c1;

    float p2;
    cout << "Peso crianca (lado esquerdo): ";
    cin >> p2;

    float c2;
    cout << "Comprimento balanca (lado esquerdo): ";
    cin >> c2;

    // Cálculo do momento (produto do peso pelo comprimento) para cada lado da balança
    float direito = p1 * c1;
    float esquerdo = p2 * c2;

    // Verificação da direção em que a balança está pendendo e exibição da mensagem correspondente
    if(direito > esquerdo){
        cout << "A balanca esta pendendo para direita.";
    } 
    else if(direito < esquerdo){
        cout << "A balanca esta pendendo para esquerda.";
    }
    else if(direito == esquerdo){
        cout << "A balanca esta equilibrada.";
    }

    return 0;
}
