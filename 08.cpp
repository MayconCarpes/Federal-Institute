#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, dado[6] = {0}; // Inicializa um vetor para contar as ocorr�ncias de cada face do dado

    printf("Informe o numero de lancamento do dado: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O numero de lancamento deve ser maior que zero.\n");
        return 1;
    }

    // Simule os lan�amentos do dado e conte as ocorr�ncias
    for (int i = 0; i < N; i++) {
        int resultado = rand() % 6 + 1; // Gere um n�mero aleat�rio de 1 a 6 (representando as faces do dado)
        dado[resultado - 1]++; // Incrementa a contagem para a face correspondente
    }

    // Apresente o resultado das ocorr�ncias de cada face
    printf("Ocorrencia de cada face do dado:\n");
    for (int i = 0; i < 6; i++) {
        printf("Face %d: %d vezes\n", i + 1, dado[i]);
    }

    return 0;
}

