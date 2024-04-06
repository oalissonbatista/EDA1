#include <stdio.h>

int main(){
    int tam;
    scanf("%d", &tam);
    int vec1[tam],vec2[tam],vecSoma[tam];
    for (int i = 0; i < tam; i++){
        scanf("%d", &vec1[i]);
    }
    for (int i = 0; i < tam; i++){
        scanf("%d", &vec2[i]);
    }
    for (int i = 0; i < tam;i++){
        vecSoma[i] = vec1[i] + vec2[i];
    }
    for (int i = 0; i < tam;i++){
        printf("%d ",vecSoma[i]);
    }
    printf("\n");
}