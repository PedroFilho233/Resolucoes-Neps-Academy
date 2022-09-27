/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int M, A, B;
    cin >> M >> A >> B;
    
    int idade = M - A - B;
    
    
    if(idade > A && idade > B) {
        cout << idade;    
    }
    
    else if(A > B && A > idade) {
        cout << A;
    }
    
    else {
        cout << B;
    }
    
    return 0;
}