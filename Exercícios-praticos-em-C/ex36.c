#include <stdio.h>

int main(){
    int numeros[5];
    int soma = 0;
    float med = 0;
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    for (int i = 0; i < 5; i++) {
        printf("numeros digitados: %d \n", numeros[i]);
    }
    printf("A soma dos valores é: %d \n", soma);
    med = (float)soma / 5;
    printf("A media dos valores é: %.2f", med);
    return 0;
}