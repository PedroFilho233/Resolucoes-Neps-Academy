/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int B, C;
    cin >> B >> C;
    
    if((B+C) % 2 == 0) {
        cout << "Bino";
    }
    
    else {
        cout << "Cino";
    }

    return 0;
}