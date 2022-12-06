/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int d1, h1, m1, d2, h2, m2;
    
    cin >> d1 >> h1 >> m1 >> d2 >> h2 >> m2;
    
    int dia = (d2-d1)*3600*24;
    int hora = (h2-h1)*3600;
    int minutos = (m2-m1)*60;
    
    cout << dia+hora+minutos;
    
    return 0;
}
