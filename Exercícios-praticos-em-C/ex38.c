#include <stdio.h>

int main(){
    int numeros [10];
    int pares = 0;
    int impares = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0){
            pares +=1;
        }
        else {
            impares +=1;
        }  
    }
    printf("Numeros digitados: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\nForam digitados %d numeros pares e %d impares",pares, impares);
    return 0;
}