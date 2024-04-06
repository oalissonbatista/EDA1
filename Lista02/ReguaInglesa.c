#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int expoente = n;
    int parada = (pow(2,n)) - 1;
    printf("%d", parada);
    /*for (int i = 0; i < ((pow(2, n)) - 1); i++)
    {
        if(i%2==0){
            for (int j = 1; j <= n;j++){
                printf("-"); 
            }
        }else{
            printf(".-\n");
        }
    }*/
    return 0;
}