#include <stdio.h>

int main() {
    int N, valor;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("O tamanho do vetor deve estar entre 1 e 100.\n");
        return 1;
    }

    int vetor[100]; // Limite máximo de 100 elementos no vetor
    int ocorrencias = 0;

    printf("Informe os %d elementos do vetor:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Informe o valor a ser pesquisado: ");
    scanf("%d", &valor);

    printf("Elementos do vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
        if (vetor[i] == valor) {
            ocorrencias++;
        }
    }

    printf("\nO valor %d ocorre %d vezes no vetor.\n", valor, ocorrencias);

    return 0;
}

