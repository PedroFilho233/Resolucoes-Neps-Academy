#include <stdio.h>
#include <string.h>

int V(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int i, tam;
    char S[55];

    scanf("%s", S);
    tam = strlen(S);

    printf("Vogais: ");
    for(i=0; i < tam; i++){
        if (V ( S[i] ) ){
            printf("%c", S[i]);
        }
    }
    printf("\n");
    printf("Consoantes: ");
    for(i=0; i < tam; i++){
        if (!V ( S[i] ) ){
            printf("%c", S[i]);
        }
    }
    
    return 0;
}