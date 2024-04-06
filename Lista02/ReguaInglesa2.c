#include <stdio.h>

void ReguaInglesa(int n) {

    if (n == 0) {
        return;
    }
    else
    {
        ReguaInglesa(n - 1);
        
        printf(".");
        for (int i = 0; i < n; i++)
        {
            printf("-");
        }
        printf("\n");
        
        ReguaInglesa(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    ReguaInglesa(n);
    
    return 0;
}