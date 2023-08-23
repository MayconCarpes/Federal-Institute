#include <stdio.h>

int main() {
    int N;

    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("O tamanho dos vetores deve estar entre 1 e 100.\n");
        return 1;
    }

    int vetor1[100], vetor2[100], vetorResultado[100];

    printf("Informe os elementos do primeiro vetor:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Informe os elementos do segundo vetor:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Multiplicação dos elementos de mesmo índice e armazenamento no vetor resultado
    for (int i = 0; i < N; i++) {
        vetorResultado[i] = vetor1[i] * vetor2[i];
    }

    printf("O vetor resultante da multiplicao e:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetorResultado[i]);
    }

    return 0;
}

