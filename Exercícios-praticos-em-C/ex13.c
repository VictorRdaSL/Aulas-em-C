#include <stdio.h>

int main() {
    int numero;
    int cont = 1;
    int soma =0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    while (cont <= numero) {
        soma = cont + soma;
        cont++;
    }
    printf("A soma é %d", soma);
    return 0;
}