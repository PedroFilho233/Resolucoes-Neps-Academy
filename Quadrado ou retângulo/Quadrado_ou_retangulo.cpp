/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int b, h;
    cin >> b >> h;
    
    if(b == h) {
        cout << (b+h)*2 << endl << "Quadrado";
    }
    
    else {
        cout << (b+h)*2 << endl << "Retangulo";
    }
    
    return 0;
}