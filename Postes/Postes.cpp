/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, x;
    int sub = 0;
    int con = 0;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x;
        if(x < 50) {
            sub++;
        }
        
        else if(x >= 50 && x < 85) {
            con++;
        }
    }
    
    cout << sub << " " << con << endl;

    return 0;
}