/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int cv, ev, sv, cf, ef, sf, cor, fla;
    cin >> cv >> ev >> sv >> cf >> ef >> sf;
    
    cor = (cv*3) + (ev*1);
    fla = (cf*3) + (ef*1);
    
    if(cor > fla) {
        cout << "C";
    }
    
    if(fla > cor) {
        cout << "F";
    }
    
    if(cor == fla) {
        if(sv > sf) {
            cout << "C";
        }
        
        if(sf > sv){
            cout << "F";
        }
    }
    
    if(cor == fla && sv == sf){
        cout << "=";
    }
    
    return 0;
}