#include <stdio.h>

int main(){
    int num;

do {
    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &num);
    if (num < 1 || num > 10) {
        printf("Numero invalido! \n");
        }
    }
    while (num < 1 || num > 10 );
    printf("Numero aceito: %d ", num);
    
    return 0;
}