/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    
    string e1;
    string e2;

    cin >> e1 >> e2;
    
    for(int i=0; i<n; i++) {
        if(e1[i] == 'C' && e2[i] == 'C') {
            c++;
        }
    }
    
    cout << c;
    
    return 0;
}
