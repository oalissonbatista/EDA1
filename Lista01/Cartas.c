#include <stdio.h>

int main(){
    int C=0;
    int D=0;
    int vect[5];
    for(int i =0; i < 5;i++){
        scanf("%d",&vect[i]);
    }
    for(int i = 0; i < 4;i++){
        if(vect[i] < vect[i+1]){
            C++;
        }else if(vect[i] > vect[i+1]){
            D++;
        }
    }
    if(C == 4){
        printf("C\n");
        return 0;
    }else if(D == 4){
        printf("D\n");
        return 0;
    }else{
        printf("N\n");
    }

    return 0;
}