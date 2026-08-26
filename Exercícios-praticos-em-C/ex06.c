#include <stdio.h>

int main(){
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade <= 12){
        printf("Criança de %d anos", idade);
    }
    else if (idade <= 17) {
        printf("Adolescente de %d anos", idade);
    }
    else if (idade <= 59) {
        printf("Adulto de %d anos", idade);
    }
    else {
        printf("Idoso de %d anos", idade);
    }
}
