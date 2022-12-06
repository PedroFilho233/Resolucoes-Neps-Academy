/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int x, y, z, c = 0;
    cin >> x >> y >> z;
    
    if(x % 2 == 0 || (x % 5 == 0 && x % 2 == 1)) {
        c++;
    }
    
    if(y % 2 == 0 || (y % 5 == 0 && y % 2 == 1)) {
        c++;
    }
    
    if(z % 2 == 0 || (z % 5 == 0 && z % 2 == 1)) {
        c++;
    }
    
    cout << c;
    
    return 0;
}
