/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, l, c;
    int quebrados = 0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> l >> c;
        if(l>c) {
             quebrados = quebrados + c;
        }
    }
    
    cout << quebrados;
    

    return 0;
}