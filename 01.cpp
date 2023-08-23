#include <stdio.h>

// Função para calcular a soma dos elementos de um vetor
int somaVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int N;
    int vetor[100]; // Limite máximo de 100 elementos no vetor

    printf("Informe o valor de N (limite maximo de 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("N deve estar entre 1 e 100.\n");
        return 1;
    }

    // Preencha o vetor com valores (você pode modificar esta parte para ler os valores do usuário)
    printf("Informe os %d elementos do vetor:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int resultado = somaVetor(vetor, N);
    printf("A soma dos elementos do vetor e: %d\n", resultado);

    return 0;
}

