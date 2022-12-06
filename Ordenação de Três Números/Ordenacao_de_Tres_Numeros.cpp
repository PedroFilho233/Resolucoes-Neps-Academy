/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x[3];
    
    for(int i=0; i<3; i++) {
        cin >> x[i];
    }
    
    sort(x, x+3);
    
    
    for(int i=0; i<3; i++) {
        cout << x[i] << endl;
    }
    
    return 0;
}
