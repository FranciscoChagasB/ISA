#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int vetor[TAM];

    int auxiliar ,temporario, trocar;

    for (auxiliar = 1; auxiliar < TAM; auxiliar++) {
        
        temporario = auxiliar;

        while (vetor[temporario] < vetor[temporario-1]) {
            trocar = vetor[temporario];
            vetor[temporario] = vetor[temporario-1];
            vetor[temporario-1] = trocar;
            temporario--;

            if (temporario == 0)
                break;
        }

    }
    
}