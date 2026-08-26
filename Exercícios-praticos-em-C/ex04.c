#include <stdio.h>

int idade;

int main() {
    printf("Qual a sua idade?: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Maior de idade");
    }
    else {
        printf("Menor de idade");
    }
    return 0;
}