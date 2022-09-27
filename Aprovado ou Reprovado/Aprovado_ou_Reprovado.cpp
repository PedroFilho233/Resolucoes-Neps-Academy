/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;
    
    double media = (A + B)/2;
    
    if(media >= 7) {
        cout << "Aprovado";
    }
    
    else if(media < 7 && media >=4) {
        cout << "Recuperacao";
    }
    
    else {
        cout << "Reprovado";
    }
    
    return 0;
}