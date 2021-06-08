#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

setlocale(LC_ALL,"");

//declarando variáveis
int i,j, matriz [i] [j];

for(i=0; i < 2; i++){
for(j = 0; j < 2; j++){
    printf("Digite o valor para [%d] [%d]", i,j);
    scanf("%f", &matriz[i] [j]);
}
}
}
