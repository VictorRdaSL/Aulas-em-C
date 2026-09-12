#include <stdio.h>

int main () {
    int vetor [7] = {};
    int i;
    
    for (int i = 0; i < 7; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\n Os números digitados são: ");
    for (int i = 0; i < 7; i++) {
        printf(" %d", vetor[i]);
    }

    for (int i = 0; i< 7 - 1; i++){
        for (int j = 0; j < 7 - i - 1; j++) {
            if (vetor [j] > vetor [j + 1]) {
                int temp = vetor [j];
                vetor [j] = vetor [j +1];
                vetor [j + 1] = temp;
            }
        }
    }

    printf("\n Os números digitados ordenados são: ");
    for (i = 0; i < 7; i++) {
        printf(" %d", vetor[i]);
    }

    return 0;
}