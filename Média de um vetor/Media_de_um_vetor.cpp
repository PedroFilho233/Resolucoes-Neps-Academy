/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, x[1000];
    double soma = 0;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x[i];
        
        soma = soma + x[i];
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << soma/n;
    
    return 0;
}