/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main(){
	
	int n, v[100100], soma = 0;
	cin >> n;
	
	for(int i=0;i<n;i++) {
		cin >> v[i];
		soma = soma + v[i];
	}

	cout << soma;
}
