#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
setlocale(LC_ALL, "Portuguese");
char vet1[1000], vet2[1000];
int i, j = 0, tamanho;

printf("Digite a mensagem criptografada: ");
gets(vet1);

tamanho = strlen(vet1);

for(i = 0; i < tamanho; i++){
if (vet1[i] == 'p' || vet1[i] == 'P') {
        i++;
        vet2[j] = vet1[i];
        j++;
        } else {
            vet2[j] = vet1[i];
            j++;
        }
}

vet2[j] = '\0';

printf("Mensagem: %s", vet2);
return 0;
}
