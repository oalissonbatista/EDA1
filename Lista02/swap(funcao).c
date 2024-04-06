#include <stdio.h>

void swap(int *a, int *b){
    //printf("Antes: %d %d\n", *a, *b);
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
    //printf("Depois: %d %d\n", *a, *b);
    return;
}