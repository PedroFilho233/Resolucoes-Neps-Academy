/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    
    cout.precision(4);
    cout.setf(ios::fixed);
    
    cout << pow(x, y);

    return 0;
}