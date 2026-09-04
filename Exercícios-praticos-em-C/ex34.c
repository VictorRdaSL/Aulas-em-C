#include <stdio.h>

int main (){
    int numeros[5];
    int maior = numeros[0];
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("O maior dos numeros é: %d \n", maior);
    return 0;
}