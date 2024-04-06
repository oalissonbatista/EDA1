#include <stdio.h>
void swap (int *a, int *b);
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    swap(&a,&b);
    return 0;

}
void swap(int *a, int *b){
    //printf("Antes: %d %d\n", *a, *b);
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
    //printf("Depois: %d %d\n", *a, *b);
    return;
}