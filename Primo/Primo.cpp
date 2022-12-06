/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
   int x, c = 0;
   
   cin >> x;
   
   for(int i=1; i<=x; i++) {
       if(x % i == 0) {
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
