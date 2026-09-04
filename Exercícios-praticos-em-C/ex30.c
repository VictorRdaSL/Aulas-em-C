#include <stdio.h>

int somar (int a, int b) {
    return a + b;
}

int main (){
    int resultado = somar(10,5);
    printf("Resultado: %d", resultado);
    return 0;
}