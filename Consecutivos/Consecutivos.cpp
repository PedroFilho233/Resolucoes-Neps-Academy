/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, x[10000], c = 0, b = 0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x[i];
    }
    
    for(int i=0; i<n; i++) {
        if(x[i] == x[i+1]) {
            c++;
        }
        
        else {
            if(c > b) {
                b = c;
            }
            c = 0;
        }
        
        if(c > b && i == n-2) {
            b = c;
        }
    }
    
    cout << b+1;
    
    return 0;
}
