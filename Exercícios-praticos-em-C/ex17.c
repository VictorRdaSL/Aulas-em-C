#include <stdio.h>

int main() {
    int quant;
    int cont = 1;
    float num;
    float soma = 0;
    float med;
    printf("Quantas notas deseja informar?: ");
    scanf("%d", &quant);
    while (cont <= quant) {
        printf("Digite a nota %d: ", cont);
        scanf("%f", &num);
        soma+=num;
        cont++;
    }
    med = soma/quant;
    printf("A média é: %.2f ", med);
    
    return 0;
}