#include <stdio.h>

int main (){
    int soma = 0;
    int numeros[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    for (int i = 0; i < 5; i++) {
        printf("%d \n", numeros[i]);
    }
    printf("A soma dos numeros é: %d \n", soma);
    return 0;
}