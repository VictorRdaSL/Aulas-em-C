#include <stdio.h>

int main (){
    int soma =0;
    for (int numero = 1; numero <=100; numero ++) {
        soma += numero;
    }
    printf("Soma: %d", soma);
    return 0;
}