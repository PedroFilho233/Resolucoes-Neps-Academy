/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    
    cin >> a >> b >> c;
    
    if((b-a) < (c - b)) {
        b = 1;
    }
    
    else if((b-a) > (c - b)) {
        b = -1;
    }
    
    else {
        b = 0;
    }
    
    cout << b;

    return 0;
}
