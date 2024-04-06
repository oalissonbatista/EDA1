#include <stdio.h>

int main() {
    int v[1000]; // Assumindo que o vetor tem no máximo 1000 elementos
    int limite, numero, soma = 0, i = 0,k = 0;
    int vetorIndice[1000];

    // Leitura da sequência de números até encontrar o zero
    do {
        scanf("%d", &numero);
        if (numero != 0)
            v[i++] = numero;
    } while (numero != 0);

    // Leitura do limite de soma
    scanf("%d", &limite);

    // Processamento e impressão dos números
    for (int j = 0; j < i; j++) {
        soma += v[j];
        if (soma > limite) {
            vetorIndice[k] = j;
            k++;
            soma = 0; // Reinicia a soma para o próximo subconjunto
        }
    }

    for (int o = k-1; o >= 0; o--)
    {
        printf("%d\n", v[vetorIndice[o]]);
    }
    return 0;
}