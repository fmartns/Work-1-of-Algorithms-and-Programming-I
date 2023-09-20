#include <iostream>

using namespace std;

int main(){

    // Declaração de variáveis
    float valor;
    cout << "Valor: ";
    cin >> valor;

    int opcao;
    cout << "Condicao de pagamento" << endl;
    cout << "[1] A vista em dinheiro ou cheque, recebe 10% de desconto" << endl;
    cout << "[2] A vista no cartao de credito, recebe 15% de desconto" << endl;
    cout << "[3] Em duas vezes, preco normal de etiqueta sem juros" << endl;
    cout << "[4] Em duas vezes, preco normal de etiqueta mais juros de 10%" << endl;
    cout << "Digite a opcao correspondente: ";
    cin >> opcao;

    // Lógica para calcular o valor final com base na opção escolhida
    if(opcao == 1){
        valor = valor - (valor/100*10); // Desconto de 10%
    }
    else if(opcao == 2){
        valor = valor - (valor/100*15); // Desconto de 15%
    }
    else if(opcao == 3){
        // Nenhuma alteração no valor, pagamento em duas vezes sem juros
    }
    else if(opcao == 4){
        valor = valor + (valor/100*10); // Juros de 10% em duas vezes
    }
    else {
        cout << "Opcao invalida, tente novamente usando os numeros da tabela acima.";
        return 0;
    }

    // Exibe o valor final da compra
    cout << "Sua compra ficou no valor de R$ " << valor;

    return 0;
}
