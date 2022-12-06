/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3>> n4;
    
    if(n1 == n3 || n2 == n4) {
        cout << "V";
    }
    
    else {
        cout << "F";
    }

    return 0;
}