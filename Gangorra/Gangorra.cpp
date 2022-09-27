/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int P1, C1, P2, C2;
    cin >> P1 >> C1 >> P2 >> C2;
    
    if((P1*C1) == (P2*C2)) {
        cout << "0";
    }
    
    else if((P1*C1) > (P2*C2)) {
        cout << "-1";
    }
    
    else {
        cout << "1";
    }

    return 0;
}