#include <stdio.h>
#include <string.h>

int main(){
    int c,j;
    char palavra[1001];
    scanf("%s", palavra);
    int tam = strlen(palavra);
    for(int i = 0, j = (tam -1); i < j; i++,j--){
        c = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = c;
    }
    printf("%s",palavra);
    printf("\n");

    return 0;
}