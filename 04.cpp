#include <stdio.h>

int main() {
    int N;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("O tamanho do vetor deve estar entre 1 e 100.\n");
        return 1;
    }

    int vetor[100]; // Limite máximo de 100 elementos no vetor
    int quantidadeImpares = 0;

    printf("Informe os %d elementos do vetor:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 != 0) {
            quantidadeImpares++;
        }
    }

    printf("A quantidade de numeros impares no vetor e: %d\n", quantidadeImpares);

    return 0;
}

