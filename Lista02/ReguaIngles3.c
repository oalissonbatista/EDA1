#include <stdio.h>
void desenharRegua(int n, int *cache) {
    if (n == 1) {
        printf(".-\n");
    } else {
        if (cache[n] != 0) {
            printf("%s\n", cache[n] == 1 ? ".-" : "-");
        } else {
            desenharRegua(n - 1, cache);
            //printf(".");
            for (int i = 0; i < n; i++)
            {
                printf("-");
            }
            printf("\n");
            desenharRegua(n - 1, cache);
            cache[n] = 1;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int cache[n + 1];
    for (int i = 0; i <= n; i++) {
        cache[i] = 0;
    }

    desenharRegua(n, cache);
    return 0;
}