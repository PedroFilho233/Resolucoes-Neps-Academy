#include<stdio.h>


int main()
{
   int x,y;

   scanf("%d%d",&x,&y);
   
   if(x>0 && y>0){
     printf("Q1\n");
    }
   if(x<0 && y>0){
     printf("Q2\n");
    }
   if(x<0 && y<0){
     printf("Q3\n");
    }
   if(x>0 && y<0){
     printf("Q4\n");
    }
   if(x==0 || y==0){
     printf("eixos\n");
    }
    
    return 0;
}