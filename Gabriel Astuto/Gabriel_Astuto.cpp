/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string p;
    int n;
    
    getline(cin, p);
    
    cin >> n;
    
    for(int i=n; i<p.size(); i++) {
        cout << p[i];
    }

    return 0;
}
