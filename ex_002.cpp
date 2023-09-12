#include <iostream>

using namespace std;

int main(){

    float value;
    cout << "Valor: ";
    cin >> value;

    float option;
    cout << "Condicao de pagamento" << endl;
    cout << "[1] A vista em dinheiro ou cheque, recebe 10% de desconto" << endl;
    cout << "[2] A vista no cartao de credito, recebe 15% de desconto" << endl;
    cout << "[3] Em duas vezes, preco normal de etiqueta sem juros" << endl;
    cout << "[4] Em duas vezes, preco normal de etiqueta mais juros de 10%" << endl;
    cout << "Digite a opcao correspondente: ";
    cin >> option;

    if(option == 1){
        value = value - (value/100*10);
    }
    else if(option == 2){
        value = value - (value/100*15);
    }
    else if(option == 3){
        value = value;
    }
    else if(option == 4){
        value = value + (value/100*10);
    }
    else {
        cout << "Opcao invalida, tente novamente usando os numeros da tabela acima.";
        return 0;
 }

    cout << "Sua compra ficou no valor de R$ " << value;

    return 0;
}