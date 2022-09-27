#include <stdio.h>

int main()
{
   int vetor[10];
   int x, i;
   int quants = 0;
   
   
    for(i=0; i<10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &x);
    for(i=0; i<10; i++) {
        if(x==vetor[i]) {
            quants++;
        }
    }
    
    
    if(quants>0) {
        printf("%d\n", quants);
        for(i=0;i<10;i++) {
            if(x==vetor[i]) {
                printf("%d ", i);
            } 
        }
    } else {
        printf("Mia x");
    }
    
    return 0;
}