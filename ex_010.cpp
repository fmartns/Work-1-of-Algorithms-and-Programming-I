#include <iostream>

using namespace std;

int main(){

    cout << "Informe as informacoes solicitadas abaixo sobre o reservatorio" << endl;

    float altura;
    cout << "Altura (cm): ";
    cin >> altura;

    float largura;
    cout << "Lagura (cm): ";
    cin >> largura;

    float comprimento;
    cout << "Comprimento (cm): ";
    cin >> comprimento;

    float consumo;
    cout << "Consumo medio (litros p/ dia): ";
    cin >> consumo;

    altura = altura / 100;
    largura = largura / 100;
    comprimento = comprimento / 100;


    float capacidade = (comprimento * largura * altura);

    int autonomia = capacidade / consumo;

    cout << "Capacidade: " << capacidade << " litros" << endl;
    cout << "Autonomia: " << autonomia << " dias" << endl;

    if(autonomia < 2){
        cout << "Classificacao: Consumo elevado.";
    }
    else if(autonomia < 7 && autonomia > 2){
        cout << "Classificacao: Consumo moderado";
    }
    else{
        cout << "Classificacao: Consumo reduzido";
    }

    return 0;
}