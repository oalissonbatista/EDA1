#include <stdio.h>

int main(){

    int entrada;
    scanf("%d", &entrada);
    int vec[entrada];
    for (int i = 0; i < entrada; i++){
        scanf("%d", &vec[i]);
    }
    int procura;
    scanf("%d", &procura);
    for (int i = 0; i < entrada; i++){
        if(vec[i] == procura){
            printf("pertence\n");
            return 0;
        }
    }
    printf("nao pertence\n");
}
