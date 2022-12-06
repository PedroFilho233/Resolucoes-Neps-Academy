/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;

    int x[n];
    
    for(int i=0; i<n; i++) {
        cin >> x[i];
    }
    
    for(int i=0; i<n-1; i++) {
        if(x[i] > x[i+1]) {
            c++;
        }
    }
    
    if(c>0) {
        cout << "Notas invalidas";
    }
    
    else {
        cout << "Notas validas";
    }
    
    return 0;
}
