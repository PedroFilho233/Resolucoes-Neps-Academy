/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    double b;
    int c, f;
    
    cin >> b >> c >> f;
    
    if((c*f) <= (b*1000)) {
        cout << "S";
    }
    
    else {
        cout << "N";
    }
    
    return 0;
}
