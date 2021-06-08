#include <iostream>
#include <stdlib.h>
#include <string>

#define TAM 10

using namespace std;

void imprime_vetor(){
     //Auxiliar contador
    int cont;

    cout << "\n";

     //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}

int main (){
    int pilha;
    int topo = -1;

    imprime_vetor[pilha];

    // caso não possa colocar mais valores
    if (topo == TAM - 1){
        cout << "pilha cheia";
    }else{
        topo = topo + 1;
        pilha[topo] =5;
    }

    imprime_vetor[pilha];
}
