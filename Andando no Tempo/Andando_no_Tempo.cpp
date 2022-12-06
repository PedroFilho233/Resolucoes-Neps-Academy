/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x[3], soma = 0;
    
    for(int i=0; i<3; i++) {
        cin >> x[i];
    }
    
    sort(x, x+3);
    
    soma = x[0] + x[1];
    
    if(soma == x[2] || x[1] == x[2] || x[0] == x[1]) {
        cout << "S";
    }
    
    else {
        cout << "N";
    }
    
    return 0;
}
