/*Problema do curso de Programação Básica(CodCad) do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n;

    int soma = 0;
    int c = 0;

    for(int i=0; i<n; i++) {
        cin >> a;
        soma += a;

        if(soma < 1000000) {
            c++;
        }
    }

    cout << ++c << endl;

    return 0;
}