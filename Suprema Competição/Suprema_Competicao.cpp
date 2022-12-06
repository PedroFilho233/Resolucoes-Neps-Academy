/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, m1, m2, will = 0, onze = 0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> m1 >> m2;
        
        if(m1 == 0 && (m2 == 1 || m2 == 2)) {
            will++;
        }
        
        else if(m1 == 1 && (m2 == 2 || m2 == 3)) {
            will++;
        }
        
        else if(m1 == 2 && (m2 == 3 || m2 == 4)) {
            will++;
        }
        
        else if(m1 == 3 && (m2 == 0 || m2 == 4)) {
            will++;
        }
        
        else if(m1 == 4 && (m2 == 0 || m2 == 1)) {
            will++;
        }
        
        else {
            onze++;
        }
    }
    
    if(will > onze) {
        cout << "will";
    }
    
    else {
        cout << "11";
    }
    
    return 0;
}
