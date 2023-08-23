#include <stdio.h>
#include <string.h>

int main() {
    char vetor[100];
    
    printf("Digite uma string (limite de 100 caracteres): ");
    
    // Usando gets() para ler a entrada (tenha em mente que gets() é insegura)
    gets(vetor);

    // Calcula o comprimento da string usando strlen()
    int comprimento = strlen(vetor);

    // Imprime a string em ordem inversa
    printf("A string em ordem inversa: ");
    for (int i = comprimento - 1; i >= 0; i--) {
        printf("%c", vetor[i]);
    }
    
    printf("\n");
    
    return 0;
}

