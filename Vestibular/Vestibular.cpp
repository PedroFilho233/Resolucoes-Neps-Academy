/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    char x[1000], a[1000];
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x[i];
    }
    
    for(int i=0; i<n; i++) {
        cin >> a[i];
        
        if(x[i] == a[i]) {
            c++;
        }
    }
    
    cout << c;

    return 0;
}