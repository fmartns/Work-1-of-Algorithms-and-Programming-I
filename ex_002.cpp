#include <iostream>

using namespace std;

int main(){

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

    if(opcao == 1){
        valor = valor - (valor/100*10);
    }
    else if(opcao == 2){
        valor = valor - (valor/100*15);
    }
    else if(opcao == 3){
        valor = valor;
    }
    else if(opcao == 4){
        valor = valor + (valor/100*10);
    }
    else {
        cout << "Opcao invalida, tente novamente usando os numeros da tabela acima.";
        return 0;
    }

    cout << "Sua compra ficou no valor de R$ " << valor;

    return 0;
}
