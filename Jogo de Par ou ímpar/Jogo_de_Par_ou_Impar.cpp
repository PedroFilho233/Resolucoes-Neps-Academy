/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int p, d1, d2;
    cin >> p >> d1 >> d2;
    
    if(p == 0) {
        if((d1  + d2) % 2 == 0) {
            cout << "0";
        }
        
        else {
            cout << "1";
        }
    }
    
    if(p == 1) {
        if((d1 + d2) % 2 == 0) {
            cout << "1";
        }
        
        else {
            cout << "0";
        }
    }

    return 0;
}