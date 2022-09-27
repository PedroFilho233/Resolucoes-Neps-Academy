/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    
    if(x > 0) {
        cout << "positivo";
    }
    
    else if(x < 0) {
        cout << "negativo";
    }
    
    else {
        cout << "nulo";
    }

    return 0;
}