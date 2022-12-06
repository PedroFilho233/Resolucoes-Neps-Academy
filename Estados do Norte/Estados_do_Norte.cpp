/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    string p;
    cin >> p;
    
    if(p == "roraima" || p == "acre" || p == "amapa" || p == "amazonas" || p == "para" || p == "rondonia" || p == "tocantins") {
        cout << "Regiao Norte";
    }
    
    else {
        cout << "Outra regiao";
    }

    return 0;
}
