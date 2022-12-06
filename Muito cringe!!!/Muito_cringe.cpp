/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    
    if(x <= 1979) {
        cout << "Geracao X!!!";
    }
    
    else if(x >= 1980 && x <= 1995) {
        cout << "Geracao Millennials. Muito cringe!!!";
    }
    
    else if(x >= 1996 && x <= 2010) {
        cout << "Geracao Z!!!";
    }
    
    else {
        cout << "Geracao Alpha!!!";
    }
    
    return 0;
}