#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, numero;

    // Inicialize o gerador de n�meros aleat�rios com uma semente diferente a cada execu��o
    srand(time(NULL));

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("O tamanho do vetor deve estar entre 1 e 100.\n");
        return 1;
    }

    int vetor[100]; // Limite m�ximo de 100 elementos no vetor
    int encontrado = 0; // Flag para indicar se o n�mero foi encontrado
    int posicao = -1; // Inicializa a posi��o com -1, que indica que o n�mero n�o foi encontrado

    // Preencha o vetor com n�meros aleat�rios
    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 1000; // Gere n�meros aleat�rios entre 0 e 999 (voc� pode ajustar o intervalo)
    }

    printf("Digite um n�mero para verificar se est� no vetor: ");
    scanf("%d", &numero);

    // Verifique se o n�mero est� no vetor
    for (int i = 0; i < N; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            posicao = i;
            break; // N�o precisamos mais continuar a busca
        }
    }

    // Apresente o resultado
    if (encontrado) {
        printf("O n�mero %d foi encontrado na posi��o %d do vetor.\n", numero, posicao);
    } else {
        printf("O n�mero %d n�o foi encontrado no vetor.\n", numero);
    }

    return 0;
}

