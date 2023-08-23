#include <stdio.h>
#include <locale.h>
#include <float.h>

int main () {
setlocale(LC_ALL, "Portuguese");
float vet[5], maior = -FLT_MAX, menor = FLT_MAX, soma = 0;
int i;

for(i = 0; i < 5; i++){
printf("Digite a nota %d da escola: ", i + 1);
scanf("%f", &vet[i]);

soma += vet[i];

if(vet[i] > maior){
maior = vet[i];
}
if(vet[i] < menor){
menor = vet[i];
}
}

float notaFinal = soma - maior - menor;
printf("Nota final: %.1f", notaFinal);

return 0;
}
