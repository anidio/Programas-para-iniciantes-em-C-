#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o principal do programa

void main(){

    setlocale(LC_ALL,"");

    int a = 5, b= 3;
    printf("A soma de %d e %d � igual a %d", a,b, a+b);

}
