#include <stdio.h>

int main(){
    int l,c;
    scanf("%d %d",&l,&c);
    int campo[l][c];

    for (int i =0; i< l;i++){
        for(int j =0; j< c;j++){
            scanf("%d", &campo[i][j]);
        }
    }
    int maiorL[l];
    int somaL = 0;
    int maiorC[c];
    int somaC =0;
    int maiorcoluna =0;
    int maiorlinha =0;
    for (int i =0; i< l;i++){
        for(int j =0; j< c;j++){
            somaL += campo[i][j];
        }
        maiorL[i] = somaL;
        somaL =0;
    }
    for (int i =0; i< c;i++){
        for(int j = 0; j< l;j++){
            somaC += campo[j][i];
        }
        maiorC[i] = somaC;
        somaC =0;
    }
    for (int i =0; i< l;i++){
        if (maiorL[i] > maiorlinha){
            maiorlinha = maiorL[i];
        }
    }
    for (int i =0; i< c;i++){
        if (maiorC[i] > maiorcoluna){
            maiorcoluna = maiorC[i];
        }
    }

    if(maiorcoluna > maiorlinha){
        printf("%d\n",maiorcoluna);
    }else{
        printf("%d\n",maiorlinha);
    }
    return 0;
}