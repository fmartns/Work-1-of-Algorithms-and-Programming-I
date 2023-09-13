#include <iostream>

using namespace std;

int main(){

    cout << "Calculadora de Porcao" << endl;

    int a;
    cout << "Informe quantos convidados A (pessoas que comem ate 300g) vao comparecer: ";
    cin >> a;

    int b;
    cout << "Informe quantos convidados B (pessoas que comem ate 1500g) vao comparecer: ";
    cin >> b;

    int c;
    cout << "Informe quantos convidados C (pessoas que comem ate 600g) vao comparecer: ";
    cin >> c;

    a = a*300;
    b = (b*1500);
    c = (c*600);

    int porcao = a + b + c;
    
    cout << "A porcao ideal para os convidados informados e de " << porcao << " gramas";

    return 0;
}