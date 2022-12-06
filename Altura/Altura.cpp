/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    double x[8], c =0;
    
    for(int i = 0; i<8; i++) {
        cin >> x[i];
        
        if(x[i] > 1.80) {
            c++;
        }
    }
    
    cout << c << " jogadores encontrados";
    
    
    return 0;
}