/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if((a == b + c + d) && (b + c == d) && b == c) {
        cout << "S";
    }
    
    else {
        cout << "N";
    }

    return 0;
}