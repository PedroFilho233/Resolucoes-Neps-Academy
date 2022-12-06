/*Problema da aba 'pratique' do NepsAcademy*/

#include <iostream>

using namespace std;

int main()
{
    int a, pa;
    int b, pb;
    int c, pc;
    
    cin >> a >> pa >> b >> pb >> c >> pc;
    
    cout << ((a*pa) + (b*pb) + (c*pc))/(pa+pb+pc);
    
    
    return 0;
}