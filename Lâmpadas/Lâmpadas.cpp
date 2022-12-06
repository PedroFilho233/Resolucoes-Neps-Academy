/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, x, l1 = 0, l2 = 0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x;
        
        if(x == 1) {
            l1 = not l1;
        }
        
        else {
            l1 = not l1;
            l2 = not l2;
        }
    }
    
    cout << l1 << endl << l2;

    return 0;
}
