#include <stdio.h>

int main(){
    int R,A,B;
    int aldo = 0;
    int beto = 0;
    int J = 0;
    int i = 0;
    int ganhador[1001];
    do{
        scanf("%d", &R);
        J = J+1;
        for (int i = 0; i < R; i++){
            scanf("%d %d", &A, &B);
            aldo += A;
            beto += B;
        }

        if (aldo > beto){
            ganhador[i] = 2;
        }else if (beto > aldo){
            ganhador[i] = 1;
        }
        i++;
        aldo =0;
        beto =0;
    }while(R!=0);
    
    for(int i = 0; i < J-1;i++){
        printf("Teste %d\n",i+1);
        if (ganhador[i] == 2){
            printf("Aldo\n");
            printf("\n");
        }else if(ganhador[i]==1){
            printf("Beto\n");
            printf("\n");
        }
    }
    return 0;
}