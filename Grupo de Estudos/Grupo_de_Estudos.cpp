/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    
    cin >> n;

    int m[n];
    
    for(int i=0; i<n; i++) {
        cin >> m[i];
    }
    
    for(int i=0; i<n; i++) {
        if(m[i] != m[i+1]) {
            c++;
        }
    }
    
    cout << c;
    
    return 0;
}
