#include <stdio.h>

int main() {
    int quant;
    int cont = 1;
    int num;
    int soma = 0;
    printf("Quantos números deseja informar?: ");
    scanf("%d", &quant);
    while (cont <= quant) {
        printf("Digite o número %d: ", cont);
        scanf("%d", &num);
        soma+=num;
        cont++;
    }
    printf("O total da soma é: %d ", soma);
    
    return 0;
}