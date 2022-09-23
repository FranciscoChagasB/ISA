#include <stdio.h>
#include <stdlib.h>
#define TAM 8;

int main() {

    int vetor[TAM];

    int i, j, menor, troca;
    for (i = 0; i < TAM - 1; i++) {
        menor = i;
        for (j = i+1; j < TAM; j++) {
            if (vetor[j] < vetor[menor]) 
                menor = j;
        }
        if (i != menor) {
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = [troca];
        }
    }

}