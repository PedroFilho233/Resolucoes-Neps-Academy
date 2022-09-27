#include <stdio.h>

int main()
{
   float n1;
   float n2;
   
   scanf("%f%f", &n1,&n2);
   
   float media = (n1*2 +n2*3)/5;
   
   if(media>=7) {
       printf("Aprovado");
   }
   else if(media<3) {
       printf("Reprovado");
   }
   else {
       printf("Final");
   }
    return 0;
}