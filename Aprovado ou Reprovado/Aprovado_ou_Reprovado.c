#include <stdio.h>

int main()
{
    float A, B;
    scanf("%f%f", &A, &B);
    
    float media = (A+B)/2;
    
    if(media>=7) {
        printf("Aprovado");
    }
    
    else if(media<7 && media>=4) {
        printf("Recuperacao");
    }
    
    else {
        printf("Reprovado");
    }

    return 0;
}