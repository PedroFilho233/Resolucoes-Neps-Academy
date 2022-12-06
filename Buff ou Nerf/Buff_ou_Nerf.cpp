/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, d, m, p;
    cin >> n >> d >> m >> p;
    
    if(n*d < m*p) {
        cout << "BUFF";
    }
    
    else {
        cout << "NERF";
    }
    
    return 0;
}
