/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    char letra;
    double n1, n2;
    cin >> letra >> n1 >> n2;
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    if(letra == 'M') {
        cout << n1*n2;
    }
    
    else if(letra == 'D') {
        cout << n1/n2;
    }
    
    return 0;
}