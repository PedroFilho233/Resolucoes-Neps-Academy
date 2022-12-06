/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, soma = 0;
    
    cin >> n1 >> n2;
    
    int v[] = {n1,n2};
    
    for(int i=0; i<2; i++) {
        if(v[i] <= 17) {
            soma += 15;
        } 
        
        else if(v[i] >= 18 && v[i] <= 59) {
            soma += 30;
        }
        
        else {
            soma += 20;
        }
    }
    
    cout << soma;

    return 0;
}
