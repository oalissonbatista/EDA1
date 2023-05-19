#include <stdio.h>

int main(){
    int n,menor,ind;
    scanf("%d",&n);
    int vect[n];

    for(int i =0;i < n ; i++){
        scanf("%d", &vect[i]);
    }
    menor = vect[0];
    for(int i = 0; i < n;i ++){
        if (vect[i] <= menor){
            menor = vect[i];
            ind = i;
        }
    }
    printf("%d\n",ind);

    return 0;
}