
#include <stdio.h>    //
#include <stdlib.h>  //
#include <locale.h> // Biblioteca que permite o uso de acentos

void  main(){  //Se usar int no lugar de VOID, precisa colocar um retorno "return 0;"


// Função que permite o uso de acentos
setlocale(LC_ALL,"");

float a,b,c;

printf("Digite a primeira nota:", a);
scanf("%f", &a);

printf("Digite a segunda nota: ", b);
scanf("%f", &b);

printf("Digite a segunda nota: ", c);
scanf("%f", &c);

printf("\n a média do aluno foi %.2f \n", ((a+b+c)/3));

if
    ((a+b+c)/3 >= 7)
    {printf("\n  O aluno foi aprovado ");}

else {
    printf("\n o aluno não foi aprovado \n \n");
}
}
