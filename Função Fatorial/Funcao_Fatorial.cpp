/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int fat = 1;
    
    cin >> n;
    
    for(fat = 1; n > 1; n--) {
        fat *= n;
    }
    
    cout << fat;

    return 0;
}
