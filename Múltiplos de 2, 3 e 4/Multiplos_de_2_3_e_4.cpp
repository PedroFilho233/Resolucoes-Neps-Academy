/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, x[10000], a = 0, b = 0, c = 0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x[i];
    }
    
    for(int i=0; i<n; i++) {
        if(x[i]%2 == 0) {
            a++;
        }
        
        if(x[i]%3 == 0) {
            b++;
        }
        
        if(x[i]%4 == 0) {
            c++;
        }
    }
    
    cout << a << endl << b << endl << c;
    
    return 0;
}
