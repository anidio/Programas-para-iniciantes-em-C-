#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3


void main (){

setlocale(LC_ALL,"");

int tamanho;
printf("\n Qual o tamanho do vetor? \n\n");
scanf("%d", &tamanho);

float vetor[tamanho], soma;
int i;


for(i=0; i < tamanho; i++){
    printf("\nvalor da posição %d: ",i);
    scanf("%f", &vetor[i]);
    soma = soma + vetor[i];
}

for(i=0; i < tamanho; i++){
    printf("\n vetor[%d] = %.2f", i, vetor[i]);
}
printf("\n \nA média entre os vetores é igual a: %.2f \n \n", soma/tamanho);



}







/*
float vetor [3],cont;


printf("Digite o valor da posição 1 do vetor:");
scanf("%f", &vetor[0]);
printf("Digite o valor da posição 2 do vetor: ");
scanf("%f", &vetor[1]);
printf("Digite o valor da posição 3 do vetor: ");
scanf("%f", &vetor[2]);

printf("\n Vetor[0] = %.2f", vetor[0]);
printf("\n Vetor[1] = %.2f", vetor[1]);
printf("\n Vetor[2] = %.2f", vetor[2]);

printf("\n \nA média entre os vetores é igual a: %.2f", (vetor[0]+vetor[1]+vetor[2])/3);


}

*/
