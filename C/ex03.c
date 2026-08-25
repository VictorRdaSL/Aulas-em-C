#include <stdio.h>

int main(){
    int idade;
    float altura;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf ("Você tem %d anos e mede %.2f metros", idade, altura);
    return 0;
}