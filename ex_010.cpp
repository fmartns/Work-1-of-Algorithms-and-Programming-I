#include <iostream>

using namespace std;

int main(){

    // Exibe uma mensagem inicial para o usuário
    cout << "Informe as informacoes solicitadas abaixo sobre o reservatorio" << endl;

    // Declara e lê a altura do reservatório em centímetros
    float altura;
    cout << "Altura (cm): ";
    cin >> altura;

    // Declara e lê a largura do reservatório em centímetros
    float largura;
    cout << "Largura (cm): ";
    cin >> largura;

    // Declara e lê o comprimento do reservatório em centímetros
    float comprimento;
    cout << "Comprimento (cm): ";
    cin >> comprimento;

    // Declara e lê o consumo médio do reservatório em litros por dia
    float consumo;
    cout << "Consumo medio (litros por dia): ";
    cin >> consumo;

    // Converte as medidas de centímetros para metros
    altura = altura / 100;
    largura = largura / 100;
    comprimento = comprimento / 100;

    // Calcula a capacidade total do reservatório em litros
    float capacidade = (comprimento * largura * altura);

    // Calcula a autonomia do reservatório em dias
    int autonomia = capacidade / consumo;

    // Exibe a capacidade e a autonomia do reservatório
    cout << "Capacidade: " << capacidade << " litros" << endl;
    cout << "Autonomia: " << autonomia << " dias" << endl;

    // Classifica o consumo com base na autonomia
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
