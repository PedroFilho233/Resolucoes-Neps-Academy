/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    if(m > n) {
        cout << (m-n)+m;
    }
    
    else if(m == n) {
        cout << m;
    }
    
    return 0;
}