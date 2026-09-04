#include <stdio.h>

int main (){
    int numeros[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    int menor = numeros[0];
    for (int i = 0; i < 5; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    
    printf("Numeros digitados: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("O menor dos numeros é: %d \n", menor);
    return 0;
}