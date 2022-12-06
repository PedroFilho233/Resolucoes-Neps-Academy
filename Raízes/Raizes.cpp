/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double x;
    
    cin >> n;
    
    cout.precision(4);
    cout.setf(ios::fixed);
    
    for(int i=0; i<n; i++) {
        cin >> x;
        cout << sqrt(x) << endl;
    }
    
    return 0;
}