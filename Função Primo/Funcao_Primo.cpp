/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
   int n, c = 0;
   
   cin >> n;
   
   for(int i=1; i<=n; i++) {
       if(n % i == 0) {
           c++;
       }
   }
   
   if(c == 2) {
       cout << "S";
   }
   
   else {
       cout << "N";
   }

    return 0;
}
