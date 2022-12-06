/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    
    cin >> x1 >> y1 >> x2 >> y2;
    
    int x = (x2 - x1) * (x2 - x1);
    int y = (y2 - y1) * (y2 - y1);
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << sqrt(x+y);


    return 0;
}
