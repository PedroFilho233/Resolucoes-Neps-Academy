/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, x[10000], c = 0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x[i];
    }
    
    for(int i=0; i<n; i++) {
        if(x[i] == 1 && x[i+1] == 0 && x[i+2] == 0 && i<n-2) {
            c++;
        }
    }
    
    cout << c;

    return 0;
}
