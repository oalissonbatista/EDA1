#include <stdio.h>

int main(int argc, char **argv){ //argv é um vetor de string
    printf("%d\n", argc-1);
    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

        return 0;
}