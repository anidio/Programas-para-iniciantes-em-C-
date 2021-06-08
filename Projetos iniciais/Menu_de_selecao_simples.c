#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do preograma

void main(){

    setlocale(LC_ALL,"");

//definindo variáveis
int opcao;

//interface de menu

//confere e valida a o opcao
while(opcao<1 || opcao >3){

printf("\n \n Escolha uma opção");
printf ("\n 1 - opção 1");
printf ("\n 2 - opção 2");
printf ("\n 3 - opção 3\n \n");

//lendo a opção

scanf("%d", &opcao);

switch(opcao){
case 1:
    printf("\n Opçao 1 foi escolhida");
    break;
case 2:
    printf("\n Opçao 2 foi escolhida");
    break;
case 3:
    printf("\n Opçao 3 foi escolhida ");
    break;
default:
    printf("\n Opçao inválida");
    break;
}
}

//pausa o programa após executar
system ("pause");
}
