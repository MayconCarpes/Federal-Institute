#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, numero;

    // Inicialize o gerador de números aleatórios com uma semente diferente a cada execução
    srand(time(NULL));

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("O tamanho do vetor deve estar entre 1 e 100.\n");
        return 1;
    }

    int vetor[100]; // Limite máximo de 100 elementos no vetor
    int encontrado = 0; // Flag para indicar se o número foi encontrado
    int posicao = -1; // Inicializa a posição com -1, que indica que o número não foi encontrado

    // Preencha o vetor com números aleatórios
    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 1000; // Gere números aleatórios entre 0 e 999 (você pode ajustar o intervalo)
    }

    printf("Digite um número para verificar se está no vetor: ");
    scanf("%d", &numero);

    // Verifique se o número está no vetor
    for (int i = 0; i < N; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            posicao = i;
            break; // Não precisamos mais continuar a busca
        }
    }

    // Apresente o resultado
    if (encontrado) {
        printf("O número %d foi encontrado na posição %d do vetor.\n", numero, posicao);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", numero);
    }

    return 0;
}

