#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal do preograma

void main(){

    setlocale(LC_ALL,"");

//definindo vari�veis
int opcao;

//interface de menu

//confere e valida a o opcao
while(opcao<1 || opcao >3){

printf("\n \n Escolha uma op��o");
printf ("\n 1 - op��o 1");
printf ("\n 2 - op��o 2");
printf ("\n 3 - op��o 3\n \n");

//lendo a op��o

scanf("%d", &opcao);

switch(opcao){
case 1:
    printf("\n Op�ao 1 foi escolhida");
    break;
case 2:
    printf("\n Op�ao 2 foi escolhida");
    break;
case 3:
    printf("\n Op�ao 3 foi escolhida ");
    break;
default:
    printf("\n Op�ao inv�lida");
    break;
}
}

//pausa o programa ap�s executar
system ("pause");
}
