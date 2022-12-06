/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, soma1 = 100, soma2 = 100;
    
    cin >> n;
    
    int a[n], d[n];
    
    for(int i=0; i<n; i++) {
        cin >> a[i] >> d[i];
    }
    
    for(int i=0; i<n; i++) {
        if(a[i] > d[i]) {
            soma2 -= a[i];
        }
        
        else if(a[i] == d[i]) {
            soma1 +=0;
            soma2 += 0;
        }
        
        else {
            soma1 -= d[i];
        }
    }
    
    cout << soma1 << endl << soma2;

    return 0;
}
