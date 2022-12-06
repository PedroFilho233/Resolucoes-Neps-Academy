/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float c, d, a;
    cin >> c >> d >> a;
    
    cout.precision(1);
    cout.setf(ios::fixed);
    
    if(((d/c) - a) > 0) {
        cout << (d/c) - a; 
    } else {
        cout << "0.0";
    }    

    return 0;
}
