/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    float a;
    int n;
    
    cin >> a >> n;
     
    if(a >= 1.60 || n >= 18) {
        cout << "Pode andar de montanha russa";
    }
    
    else {
        cout << "Nao pode andar de montanha russa";
    }
    
    return 0;
}