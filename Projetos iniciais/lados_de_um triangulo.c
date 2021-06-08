#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

// ler acentos
setlocale(LC_ALL,"");

//declaração de variáveis
float a, b, c;


//inicio do programa

printf("digite o valor do primeiro lado: ", a);
scanf("%f", &a );

printf("digite o valor do segundo lado: ", b);
scanf("%f",&b );

printf("digite o valor do terceiro lado: ", c);
scanf("%f", &c );

if ((a==b) && (b==c)){
    printf("\n O triângulo é equilátero");
}

if ((a==b) || (b==c) || (a==c)){
    printf("\n O triângulo é isósceles! ");
}

else{
    printf("\n O triângulo é escaleno!");
}
}

