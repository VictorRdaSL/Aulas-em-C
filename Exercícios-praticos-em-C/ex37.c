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
    int maior = numeros[0];
    for (int i = 0; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
        int menor = numeros[0];
    for (int i = 0; i < 5;i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    printf("Numeros digitados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\nA soma dos valores é: %d", soma);
    med = (float)soma / 5;
    printf("\nA media dos valores é: %.2f", med);
    printf("\nO maior dos numeros é: %d", maior);
    printf("\nO menor dos numeros é: %d", menor);
    return 0;
}