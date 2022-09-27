#include <stdio.h>
#include <string.h>

int main()
{
    char S[49], C;
    int i, quants = 0, tam;
    
    scanf("%s %c", &S, &C);
    tam = strlen(S);
    
    for(i=0;i<tam; i++) {
        if(S[i] == C) {
            quants++;
        }
    }
    
    printf("%d", quants);
    
    return 0;
}