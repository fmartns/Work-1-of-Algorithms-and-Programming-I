

#include <iostream>

using namespace std;

int main()
{
    int incognitaA;
    int incognitaB;
    int incognitaC;
    
    cout << "Na equação do 2° grau apresente respectivamente o valor de A, B e C :" << endl;
    cout << "valor de A: " << endl;
    cin >> incognitaA;
    cout << "valor de B: " << endl;
    cin >> incognitaB;
    cout << "valor de C: " << endl;
    cin >> incognitaC;
    
    int discriminante = ((incognitaB*incognitaB) - (4*incognitaA*incognitaC));
    
    cout << discriminante << endl;
    
    if (discriminante > 0 ) {
        cout << "A equação tem duas raízes reais diferentes" << endl; 
    } else if (discriminante == 0) {
        cout << "A equação tem uma raiz real única" << endl;
    } else if (discriminante < 0 ) {
        cout << "A equação não tem raízes reais" << endl;
    } else {
        cout <<"erro";
    }
   
    
    

    
    
    
    return 0;
}
