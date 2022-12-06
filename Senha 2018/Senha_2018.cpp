/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    
    for(int i=0; i<100; i++) {
        cin >> n;
        if(n != 2018) {
            c++;
        }
        
        if(n == 2018) {
            break;
        }
    }
    
    cout << c;
    
    return 0;
}