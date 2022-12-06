/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, c = 0;
    
    cin >> n >> m;
    
    int x[m];
    
    for(int i=0; i<m; i++) {
        cin >> x[i];
    }
    
    sort(x, x+m);
    
    for(int i=0; i<m; i++) {
        if(x[i] != x[i+1]) {
            c++;
        }
    }
    
    cout <<  n - c;

    return 0;
}
