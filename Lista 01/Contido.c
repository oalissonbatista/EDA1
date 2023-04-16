#include <stdio.h>

int main(){
    int n,escolha;
    scanf("%d", &n);
    int vect[n];
    for(int i =0 ; i< n; i++){
        scanf("%d", &vect[i]);
    }
    scanf("%d",&escolha);
    for(int i = 0;i < n; i++){
        if(escolha == vect[i]){
            printf("pertence\n");
            return 0;
        }
    }
    printf("nao pertence\n");
    return 0; 
}