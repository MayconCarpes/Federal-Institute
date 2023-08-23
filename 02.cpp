#include <stdio.h>

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

    printf("O vetor informado é: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetor[i]);
    }

    float menor = vetor[0]; // Assumimos que o primeiro elemento é o menor inicialmente

    for (int i = 1; i < n; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i]; // Atualizamos o menor se encontrarmos um valor menor
        }
    }

    printf("\nO menor elemento do vetor e: %.2f\n", menor);

    return 0;
}

