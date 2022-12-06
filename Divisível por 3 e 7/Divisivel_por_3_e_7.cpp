/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    if(n % 3 == 0 && n % 7 == 0) {
        cout << "Divisivel";
    }
    
    else {
        cout << "Nao divisivel ";
    }

    return 0;
}
