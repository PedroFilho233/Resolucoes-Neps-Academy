/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if((a < b+c) && (b < a+c) && (c < a+b)) {
        cout << "S" << endl;
        
       if(a == b && a == c) {
           cout << "3";
       }
       
       else if(a != b && a != c) {
           cout << "2";
       }
       
       else {
           cout << "1";
       }
    }
    
    else {
        cout << "N";
    }
    
    return 0;
}
