#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

// ler acentos
setlocale(LC_ALL,"");

//declara��o de vari�veis
float a, b, c;


//inicio do programa

printf("digite o valor do primeiro lado: ", a);
scanf("%f", &a );

printf("digite o valor do segundo lado: ", b);
scanf("%f",&b );

printf("digite o valor do terceiro lado: ", c);
scanf("%f", &c );

if ((a==b) && (b==c)){
    printf("\n O tri�ngulo � equil�tero");
}

if ((a==b) || (b==c) || (a==c)){
    printf("\n O tri�ngulo � is�sceles! ");
}

else{
    printf("\n O tri�ngulo � escaleno!");
}
}

