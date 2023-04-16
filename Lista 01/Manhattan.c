#include <stdio.h>
#include <stdlib.h>

int main(){
    int Xm,Ym,Xr,Yr;

    scanf("%d %d %d %d", &Xm, &Ym, &Xr, &Yr);

    printf("%d\n", abs(((Xm) - (Xr))) + abs((Ym) - (Yr)));
    return 0;
}