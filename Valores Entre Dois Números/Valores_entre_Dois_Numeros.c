#include<stdio.h>

int main()
{

int x;
int y;
int aux;

scanf("%d%d",&x,&y);

if(y<x) {
  aux = y;
  y = x;
  x = aux;
}

for(int i=x;i<=y;i++){
  printf("%d ",i);
}

             return 0;
}