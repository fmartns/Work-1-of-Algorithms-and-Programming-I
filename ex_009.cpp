#include <iostream>

using namespace std;

int main(){

    float num1;
    cout << "Digite o primeiro valor: ";
    cin >> num1;

    float num2;
    cout << "Digite o segundo valor: ";
    cin >> num2;

    float num3;
    cout << "Digite o terceiro valor: ";
    cin >> num3;

    if(num1 > num2 && num1 > num3){
        if(num2 > num3){
            cout << "A mediana entre os tres numeros e " << num2;
        }
        else{
            cout << "A mediana entre os tres numeros e " << num3;
        }
    }
    else if(num2 > num1 && num2 > num3){
        if(num1 > num3){
            cout << "A mediana entre os tres numeros e " << num1;
        }
        else{
            cout << "A mediana entre os tres numeros e " << num3;
        }
    }
    else{
        if(num1 > num2){
            cout << "A mediana entre os tres numeros e " << num1;
        }
        else{
            cout << "A mediana entre os tres numeros e " << num2;
        }
    }
    
    return 0;
}
