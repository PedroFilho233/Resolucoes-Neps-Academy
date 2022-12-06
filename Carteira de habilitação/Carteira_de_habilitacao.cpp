/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int ano, ano_nasc;
    cin >> ano >> ano_nasc;
    
    if((ano - ano_nasc) >= 18) {
        cout << ano - ano_nasc << endl << "Pode tirar carteira" << endl << (ano-ano_nasc)-18;
    }
    
    else {
        cout << ano - ano_nasc << endl << "Nao pode tirar carteira" << endl << 18-(ano-ano_nasc);
    }
    
    return 0;
}
