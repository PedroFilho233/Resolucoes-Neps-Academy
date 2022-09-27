/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int soma = 0;
    
    for(int i=0; i<n; i++) {
        cin >> x;
        soma = soma + x;
    }
    
    cout << soma;
    
    return 0;
}