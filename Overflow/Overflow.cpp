/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int N, P, Q;
    char C;
    cin >> N >> P >> C >> Q;
    
    if(C == '+') {
        if(P+Q <= N) {
            cout << "OK";
        }
        
        else if(P+Q > N) {
            cout << "OVERFLOW";
        }
    }
    
    if(C == '*') {
        if(P*Q <= N) {
            cout << "OK";
        }
        
        else if(P*Q > N) {
            cout << "OVERFLOW";
        }
    }

    return 0;
}