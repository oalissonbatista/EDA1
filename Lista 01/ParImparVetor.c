#include <stdio.h>
#include <stdbool.h>

int main(){
    int N;
    scanf("%d", &N);
    int vect[N],impar[N];
    

    for(int i=0; i < N;i++){
        scanf("%d", &vect[i]);
    }
    for (int i = 0; i<N ;i++){
        if( vect[i] % 2 ==0 ){
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = 0; i<N ;i++){
        if(vect[i] % 2 != 0){
            printf("%d ",i);
        }
        
    }
    printf("\n");
    return 0;
}