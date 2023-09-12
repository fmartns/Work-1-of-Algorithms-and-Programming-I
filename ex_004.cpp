#include <iostream>

using namespace std;

int main(){

    float num1;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    float num2;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    float num3;
    cout << "Digite o terceiro numero: ";
    cin >> num3;

    if(num1 >= num2 && num1 >= 3){
        if(num2 >= num3){
            cout << "Números em ordem crescente: " << num1 << ", " << num2 << " e " << num3 << endl;
        }
        else{
            cout << "Números em ordem crescente: " << num1 << ", " << num3 << " e " << num2 << endl;
        }
    }
    else if(num2 >= num1 && num2 >= num3){
        if(num1 >= num3){
            cout << "Números em ordem crescente: " << num2 << ", " << num1 << " e " << num3 << endl;
        }
        else{
            cout << "Números em ordem crescente: " << num2 << ", " << num3 << " e " << num1 << endl;
        }
    }
    else if(num3 >= num1 && num3 >= num2){
        if(num1 >= num2){
            cout << "Números em ordem crescente: " << num3 << ", " << num1 << " e " << num2 << endl;
        }
        else{
            cout << "Números em ordem crescente: " << num3 << ", " << num2 << " e " << num1 << endl;
        }
    }

    return 0;
}