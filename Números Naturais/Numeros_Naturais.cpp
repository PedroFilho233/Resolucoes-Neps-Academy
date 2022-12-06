/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, soma = 0;
    
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        soma += i;
    }
    
    cout << soma;

    return 0;
}
