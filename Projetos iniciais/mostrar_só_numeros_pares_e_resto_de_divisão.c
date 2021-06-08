#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");


int valor, i;

for(i=10; i<=20;i++){
    if(i % 2 ==0 ){
printf("%d é par\n", i);
   }  else{printf("%d é impar\n",i);}



}
}
