#include <stdio.h>
void swap (int *a, int *b);
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    swap(&a,&b);
    return 0;

}

void swap(int *a, int *b){
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
    printf("Antes: %d %d", *b, *a);
    printf("\nDepois: %d %d\n", *a, *b);
    return;
}