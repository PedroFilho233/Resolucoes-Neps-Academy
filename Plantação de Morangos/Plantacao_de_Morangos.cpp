/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    
    if((n1*n2) > (n3*n4)) {
        cout << n1*n2;
    }
    
    else {
        cout << n3*n4;
    }
    
    return 0;
}