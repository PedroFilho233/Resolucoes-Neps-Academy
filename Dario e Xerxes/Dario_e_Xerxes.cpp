/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, d, x;
    int dario = 0;
    int xerxes = 0;
    
    cin >> n;
    

    for(int i=0; i<n; i++) {
        cin >> d >> x;
        if(d == 0 && (x == 1 || x == 2)) {
            dario++;
        }
        
        else if(d == 1 && (x == 2 || x == 3)) {
            dario++;
        }
        
        else if(d == 2 && (x == 3 || x == 4)) {
            dario++;
        }
        
        else if(d == 3 && (x == 0 || x == 4)) {
            dario++;
        }
        
        else if(d == 4 && (x == 1 || x == 0)) {
            dario++;
        }
        
        else {
            xerxes++;
        }
    }
    
    if(dario > xerxes) {
        cout << "dario";
    }
    
    else {
        cout << "xerxes";
    }

    return 0;
}