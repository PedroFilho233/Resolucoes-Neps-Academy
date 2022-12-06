/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int d;
    int c = 0;
    cin >> d;
    
    if(d <= 800) {
        c = 1;
    }
    
    else if(d > 800 && d <= 1400) {
        c = 2;
    }
    
    else if(d > 1400 && d <= 2000) {
        c = 3;
    }
    
    cout << c;
    
    return 0;
}