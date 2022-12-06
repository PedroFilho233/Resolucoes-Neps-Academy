/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3], soma = 0;
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin >> matriz[i][j];
        }
    }
    
    for(int i=0; i<3; i++) {
        soma = 0;
        for(int j=0; j<3; j++) {
            soma += matriz[j][i];
        }
        
        cout << "Coluna " << i << ": " << soma << endl;
    }
    return 0;
}
