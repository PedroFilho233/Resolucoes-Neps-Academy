#include <stdio.h>

int main()
{
   int vetor[10];
   int x, i;
   int existe = 0;
   
   
    for(i=0; i<10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &x);
    
    for(i=0; i<10; i++) {
        if(x==vetor[i]) {
            existe = 1;
        }
    }
    
    if(existe==1) {
        printf("SIM");
    }
    
    else  {
        printf("NAO");
    }
  
    return 0;
}