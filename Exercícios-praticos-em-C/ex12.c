#include <stdio.h>

int main() {
    int numero = 1;
    int cont = 1;
    printf("Escolha um numero: ");
    scanf("%d", &numero);
    while (cont <= numero) {
        printf("%d\n", cont);
        cont++;
    }
    return 0;
}