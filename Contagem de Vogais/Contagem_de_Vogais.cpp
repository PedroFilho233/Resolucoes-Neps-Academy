/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    string s;
    int n, c =0;
    
    cin >> n >> s;
    
    for(int i=0; i<n; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            c++;
        }
    }
    
    cout << c;

    return 0;
}