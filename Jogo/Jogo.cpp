/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int x, t[100000];
    
    cin >> x;
    
    for(int i=0; i<10000; i++) {
        cin >> t[i];
        
        if(t[i] > x) {
            cout << "menor" << endl;
        }
        
        else if(t[i] < x) {
            cout << "maior" << endl;
        }
        
        else {
            cout << "correto" << endl;
            return 0;
        }
    }
	
	return 0;
	
}