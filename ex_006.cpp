#include <iostream>

using namespace std;

int main(){

    cout << "Digite os tres angulos do triangulo. " << endl;
    float angle1;
    cout << "Primeiro angulo: ";
    cin >> angle1;

    float angle2;
    cout << "Segundo angulo: ";
    cin >> angle2;

    float angle3;
    cout << "Terceiro angulo: ";
    cin >> angle3;

    if((angle1+angle2+angle3) == 180){
        if(angle1 < 90 && angle2 < 90 && angle3 < 90){
            cout << "Triangulo Acutangulo";
        }
        else if(angle1 == 90 || angle2 == 90 || angle3 == 90){
            cout << "Triangulo Retangulo";
        }
        else{
            cout << "Triangulo Obtusangulo";
        }
    }
    else{
        cout << "Os valores nao formam um triangulo.";
    }

    return 0;
}