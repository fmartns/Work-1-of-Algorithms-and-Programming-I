#include <iostream>

using namespace std;

int main(){

    float num1;
    cout << "Digite a primeira nota: ";
    cin >> num1;

    float num2;
    cout << "Digite a segunda nota: ";
    cin >> num2;

    float num3;
    cout << "Digite a terceira nota: ";
    cin >> num3;

    float media = (num1 + num2 + num3)/3;
    cout << "A media foi " << media;

    return 0;
}