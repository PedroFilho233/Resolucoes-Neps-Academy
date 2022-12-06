/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, a, l, p;
    cin >> n >> a >> l >> p;
    
    if(a >= n && l >= n && p >= n) {
        cout << "S";
    }
    
    else {
        cout << "N";
    }
    
    return 0;
}