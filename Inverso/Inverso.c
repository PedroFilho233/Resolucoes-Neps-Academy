#include <stdio.h>

int main()
{
    int v[10];
    
    for(int i=0; i<10;i++){
        scanf("%d", &v[i]);
    }
    
    for(int i=9; i>=0; i--) {
        printf("%d\n", v[i]);
    }

    return 0;
}