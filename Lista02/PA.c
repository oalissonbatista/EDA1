#include <stdio.h>

int pa_recursiva(int *v, int primeiro, int ultimo);
int main(){
    int n = 10;
    int vec[10] = { 2,4,6,8,10,12,14,16,18,21};
    printf("%d\n", pa_recursiva(&vec, 0, n - 1));
}

int pa_recursiva (int *v, int primeiro, int ultimo){

    if (primeiro >= ultimo || primeiro == ultimo -1){
        return 1;
    }
    if((v[primeiro] + v[ultimo])!= v[primeiro+1] + v[ultimo -1]  ){
        return 0;
    }
    return pa_recursiva(v, primeiro + 1, ultimo - 1);
}