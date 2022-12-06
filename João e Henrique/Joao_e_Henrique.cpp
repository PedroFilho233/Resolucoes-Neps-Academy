/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    double n;
    cin >> n;
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << "Joao e Henrique devem guardar R$ " << (n*2) - (0.15*n)*2;
    
    return 0;
}