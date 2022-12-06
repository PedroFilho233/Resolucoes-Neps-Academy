/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int x[3], um = 0, dois = 0;
    
    for(int i=0; i<3; i++) {
        cin >> x[i];
        
        if(x[i] == 1) {
            um++;
        }
        
        else {
            dois++;
        }
    }
    
    if(um > dois) {
        cout << "1";
    }
    
    else {
        cout << "2";
    }
    
    return 0;
}