#include <stdio.h>
#include <string.h>

int main() {
    char dna[51]; // Vetor para armazenar a fita de DNA (limite de 50 bases)
    char complementar[51]; // Vetor para armazenar a fita complementar

    printf("Digite a fita de DNA (limite de 50 bases): ");
    scanf("%s", dna);

    int tamanho = strlen(dna);

    // Gerar a fita complementar
    for (int i = 0; i < tamanho; i++) {
        char base = dna[i];
        char complemento;

        // Encontre a base complementar
        switch (base) {
            case 'A':
                complemento = 'T';
                break;
            case 'T':
                complemento = 'A';
                break;
            case 'C':
                complemento = 'G';
                break;
            case 'G':
                complemento = 'C';
                break;
            default:
                printf("Base desconhecida: %c\n", base);
                return 1; // Saia com código de erro
        }

        complementar[i] = complemento;
    }

    complementar[tamanho] = '\0'; // Termina a string complementar com null-terminator

    printf("Fita de DNA complementar: %s\n", complementar);

    return 0;
}

