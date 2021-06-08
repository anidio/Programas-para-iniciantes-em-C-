#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função principal do programa

void main(){

    setlocale(LC_ALL,"");

    int a = 5, b= 3;
    printf("A soma de %d e %d é igual a %d", a,b, a+b);

}
