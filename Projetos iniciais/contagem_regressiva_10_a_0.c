#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

int cont;
/*
while(cont>=0){

    printf("\n%d", cont);

    cont--;
}

do{
    printf("\n %d", cont);
    cont--;

   } while(cont>=0);
}
*/
for(cont = 10; cont > 0; cont--){
        printf("\n%d", cont);
    }
}





