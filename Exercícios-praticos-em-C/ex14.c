#include <stdio.h>

int main() {
    int num;
    int cont = 1;
    printf("Digite um número para saber a tabuada: ");
    scanf("%d", &num);
    while (cont <= 10) {
        printf("%d x %d = %d \n", num, cont, (num*cont));
        cont++;
    }
    
    return 0;
}