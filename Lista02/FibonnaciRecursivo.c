#include <stdio.h>

long int fibonacci (int n);
int main(){
    printf("%ld\n", fibonacci(11));
    return 0;
}
long int fibonacci (int n){
    if(n <=2){
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}