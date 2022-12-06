/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n[1000], maior = 0, c = 0;
    
    for(int i=0; i<100; i++) {
        cin >> n[i];
        c++;
        
        if(n[i] == 0) {
            break;
        }
    }
    
    for(int i=0; i<c; i++) {
        if(n[i] > maior) {
            maior = n[i];
        }
    }
    
    cout << maior;

    return 0;
}