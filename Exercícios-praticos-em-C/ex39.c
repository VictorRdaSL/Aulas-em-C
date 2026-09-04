#include <stdio.h>

int main(){
    int numeros [10];
    int num;
    int encontrado = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros digitados: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\nDigite um numero para pesquisar: ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == num) {
            encontrado = 1;
        }
    }   
    if (encontrado == 1) {
        printf("%d está dentro do array", num);
    }
    else {
        printf("%d NÃO está dentro do array", num);
    }
    return 0;
}