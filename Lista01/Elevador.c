#include <stdio.h>

int main(){
    int N,C,S,E;
    int dentro = 0;
    int limite =0;
    scanf("%d %d", &N, &C);

    for(int i = 0; i < N; i++){
        scanf("%d %d", &S, &E);
        dentro = dentro + E - S;
        if (dentro > C){
            limite ++;
        }
    }
    if (limite > 0){
        printf("S\n");
    }else{
        printf("N\n");
    }
    return 0;
}