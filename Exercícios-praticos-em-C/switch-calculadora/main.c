#include <stdio.h>

int main() {
    printf("=== CALCULADORA ===\n");
    printf("                   \n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    int opcao;
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    float num1;
    float num2;
    float soma;
    float sub;
    float multi;
    float divisao;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    switch (opcao) {
        case 1:
            printf("SOMAR\n");
            soma = (num1 + num2);
            printf("O resultado é %.2f", soma);
            break;
        case 2:
            printf("Subtrair\n");
            sub = (num1 - num2);
            printf("O resultado é %.2f", sub);
            break;
        case 3:
            printf("Multiplicar\n");
            multi = (num1 * num2);
            printf("O resultado é %.2f", multi);
            break;
        case 4:
            printf("Dividir\n");
            if (num2 == 0){
                printf("Nao é possivel dividir por zero");
            }
            else {
                divisao = (num1 / num2);
                printf("O resultado é %.2f", divisao);
            }
            break;
        default:
            printf("Opcao invalida");
    }
    return 0;
}