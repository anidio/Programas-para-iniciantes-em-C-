
#include <stdio.h>    //
#include <stdlib.h>  //
#include <locale.h> // Biblioteca que permite o uso de acentos

void  main(){  //Se usar int no lugar de VOID, precisa colocar um retorno "return 0;"


// Fun��o que permite o uso de acentos
setlocale(LC_ALL,"");

//definir vari�veis
int a = 5, b = 10, c = 15;
char d = 'x';

//maior

if(a > 2){
    printf("%d � maior que 2 \n", a);
}

//maior ou igual
if(c >= b){
    printf("%d � maior que %d \n",c, b);
}

//menor
if(a < 10){
    printf("%d � menor que 10 \n", a);
}

//menor
if(a <= 10){
    printf("%d � menor ou igual a 10 \n", a);
}


//diferente
if(c != 10){
    printf("%d � diferente de 10 \n", a);
}

if(d != 'a'){
    printf(" %c � diferente de a \n", a);
}




//pausa o programa ap�s executar
system("pause");
}
