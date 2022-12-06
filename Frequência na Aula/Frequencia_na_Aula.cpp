/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, v[1000000], c = 0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    sort(v, v+n);
    
    for(int i=0; i<n; i++) {
        if(v[i] != v[i+1]) {
            c++;
        }
    }
    
    cout << c;
    
    return 0;
}
