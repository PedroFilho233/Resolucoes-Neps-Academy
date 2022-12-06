/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int x[5], soma = 0;
    
    for(int i=0; i<5; i++) {
        cin >> x[i];
        
        soma = soma + x[i];
    }
    
    if(soma >= 40) {
        cout << "Carga de horas completa";
    }
    
    else {
        cout << "Carga de horas incompleta";
    }
    
    return 0;
}
