/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int c;
    double q;
    
    cin >> c >> q;
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    switch(c) {
        case 1:
        cout << "O valor total da compra e R$" << q*6.90;
        break;
        
        case 2:
        cout << "O valor total da compra e R$" << q*7.30;
        break;
        
        case 3:
        cout << "O valor total da compra e R$" << q*4.50;
        break;
        
        case 4:
        cout << "O valor total da compra e R$" << q*5.70;
        break;
    }
    
    return 0;
}