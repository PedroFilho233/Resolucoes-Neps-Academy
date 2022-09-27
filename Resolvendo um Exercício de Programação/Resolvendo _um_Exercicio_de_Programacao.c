#include<iostream>
using namespace std;

int main(){
    int p, r;

    // Ler os valores da entrada
    cin >> p >> r;

   // Se p igual a 0 a bolinha cai em C
    if(p==0){
        cout << "C" << endl;
    }

   // Se p igual a 1 temos que verificar r
    if(p==1){
        // Se r igual a 0 a bolinha cai em B
        if(r==0){
        cout << "B" << endl;
        }
        // Se r igual a 1 a bolinha cai em A
        if(r==1){
        cout << "A" << endl;
        }
    }
    return 0;
}