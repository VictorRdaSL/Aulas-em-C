#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float med;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    med = (nota1 + nota2) / 2;

    if (med >= 7) {
        printf("APROVADO");
    }
    else {
        printf("REPROVADO");
    }
}