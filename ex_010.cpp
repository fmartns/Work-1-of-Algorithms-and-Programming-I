#include <iostream>

using namespace std;

int main(){

    cout << "Informe as informacoes solicitadas abaixo sobre o reservatorio" << endl;

    float altura;
    cout << "Altura (cm): ";
    cin >> altura;

    float largura;
    cout << "Largura (cm): ";
    cin >> largura;

    float comprimento;
    cout << "Comprimento (cm): ";
    cin >> comprimento;

    float consumo;
    cout << "Consumo medio (litros por dia): ";
    cin >> consumo;

    float capacidade = (comprimento * largura * altura) / 1000;

    int autonomia = capacidade / consumo;

    cout << "Capacidade: " << capacidade << " litros" << endl;
    cout << "Autonomia: " << autonomia << " dias" << endl;

    if (autonomia < 2) {
        cout << "Classificacao: Consumo elevado.";
    }
    else if (autonomia < 7 && autonomia >= 2) {
        cout << "Classificacao: Consumo moderado.";
    }
    else {
        cout << "Classificacao: Consumo reduzido.";
    }

    return 0;
}
