/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a != b && a != c) {
        cout << "A";
    }
    
    else if(b != a && b != c) {
        cout << "B";
    }
    
    else if(c != a && c != b) {
        cout << "C";
    }
    
    else {
        cout << "*";
    }

    return 0;
}