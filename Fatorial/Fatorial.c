#include <stdio.h>

int fatorial(int n) {
  int fat = 1, i;
  
  for(i = 1;i<=n;i++) {
      fat = fat*i;
  }
    return fat;
}

int main() 
{
  int N;
  scanf("%d",&N);
  
  
  printf("%d\n",fatorial(N));

}