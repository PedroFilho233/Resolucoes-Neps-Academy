/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, x;
    int maior = 0;
    int menor = 1000;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x;
        
        if(x > maior) {
            maior = x;
        }
        
        if(x < menor) {
            menor = x;
        }
    }
    
    cout << maior << endl << menor;

    return 0;
}