#include <stdio.h>

int main (){
    int num;
    float soma =0;
    float media;
    for (int numero = 1; numero <=5; numero++ ) {
        printf ("Digite um número: %d", numero);
        scanf ("%d", &num);
        soma+= num;
    }
    media = soma / 5;
    printf("Soma: %.2f \n", soma);
    printf("Média: %.2f", media);

    return 0;
}