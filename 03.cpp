#include <stdio.h>

// Função para encontrar o maior elemento em um vetor de números reais
float encontrarMaior(float vetor[], int tamanho) {
    float maior = vetor[0]; // Assumimos que o primeiro elemento é o maior inicialmente

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i]; // Atualizamos o maior se encontrarmos um valor maior
        }
    }

    return maior;
}

int main() {
    int n;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Tamanho do vetor deve estar entre 1 e 100.\n");
        return 1;
    }

    float vetor[100]; // Limite máximo de 100 elementos no vetor

    printf("Informe os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
    }

    printf("O vetor informado é:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetor[i]);
    }

    float maior = encontrarMaior(vetor, n);
    printf("\nO maior elemento do vetor: %.2f\n", maior);

    return 0;
}

