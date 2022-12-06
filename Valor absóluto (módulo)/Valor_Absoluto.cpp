/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if(n < 0) {
        cout << n*(-1);
    }
    
    else if(n == 0 || n > 0) {
        cout << n;
    }
    
    
    return 0;
}
