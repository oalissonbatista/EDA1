#include <stdio.h>

int main(){

    int tam;
    scanf("%d", &tam);
    int vec[tam];
    for (int i = 0; i < tam; i ++){
        scanf("%d", &vec[i]);
    }
    for (int i = 0; i < tam; i ++){
        if(vec[i] %2 ==0){
            printf("%d ", vec[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < tam; i++)
    {
        if(vec[i] %2 !=0){
            printf("%d ",vec[i]);
        }
    }
    printf("\n");

        return 0;
}