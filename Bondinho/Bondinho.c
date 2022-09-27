#include <stdio.h>

int main()
{
    int A, M;
    scanf("%d%d", &A, &M);
    
    if(A+M<=50) {
        printf("S");
    }
    else {
        printf("N");
    }

    return 0;
}