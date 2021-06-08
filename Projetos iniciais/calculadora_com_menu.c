#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
//setando biblioteca de acentos
setlocale(LC_ALL,"");

//variavéis
float a, b;
int opcao;
//inicio do programa



printf("\n Digite o Primeiro valor:", a);
scanf("%f", &a);
printf("\n Digite o Segundo valor:", b);
scanf("%f", &b);

printf("\n Sejam bem vindos a calculadora da isatech, escolha sua operação: ");
printf("\n \n 1 - Somar");
printf("\n 2 - Subtrair");
printf("\n 3 - dividir");
printf("\n 4 - Multiplicar");

scanf("%d", &opcao);

switch(opcao){

case 1:
    printf("Resultado da soma: %.2f", a+b);
    break;

case 2:
    printf ("Resultado da Subtração: %.2f", a-b);
    break;
case 3:
    printf ("Resultado da Divisão: %.2f", a/b);
    break;
case 4:
    printf ("Resultado da Multiplicação: %.2f", a*b);
    break;
default:
    printf ("Opção inválida!");
    break;

}
}
