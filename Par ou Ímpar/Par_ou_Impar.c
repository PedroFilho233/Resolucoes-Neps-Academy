#include <stdio.h>

int par(int n) {
    return n%2==0;
}

int main() {
    int a,b;
    scanf("%d%d", &a,&b);
    if(par(a+b)) {
        printf("Bino\n");
    } else {
        printf("Cino\n");
    }
}