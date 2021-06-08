#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

float  a,b,c,resultado;



printf("digite os valores = ");
scanf("%f %f %f", &a, &b, &c);

resultado = a*b*c;

printf("a multiplicação dos números é = %f", resultado);






}

