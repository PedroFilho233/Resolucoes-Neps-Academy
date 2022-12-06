/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int l1, a1, l2, a2;
    cin >> l1 >> a1 >> l2 >> a2;
    
    if((l1*a1) > (l2*a2)) {
        cout << "Primeiro";
    }
    
    else if((l1*a1) < (l2*a2)) {
        cout << "Segundo";
    }
    
    else {
        cout << "Empate";
    }
    
    return 0;
}