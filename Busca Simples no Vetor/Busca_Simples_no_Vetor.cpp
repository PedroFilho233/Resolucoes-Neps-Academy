/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, x;
    bool b = 0;
    
    cin >> n;
    
    int v[n];
    
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    cin >> x;
    
    for(int i=0; i<n; i++) {
        if(v[i] == x) {
            b = 1;
        }
    }
    
    if(b == 0) {
        cout << "nao_pertence";
    }
    
    else {
        cout << "pertence";
    }
    
    return 0;
}
