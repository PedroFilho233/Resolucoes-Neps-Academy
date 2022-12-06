/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int ano, ano_nasc;
    cin >> ano >> ano_nasc;
    
    if((ano - ano_nasc) >= 18) {
        cout << ano - ano_nasc << endl << "Maior";
    }
    
    else {
        cout << ano - ano_nasc << endl << "Menor";
    }
    
    return 0;
}