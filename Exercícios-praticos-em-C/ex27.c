#include <stdio.h>

int main (){
    int somaPares = 0;
    int somaImpares = 0; 
    for (int numero = 1; numero <= 100; numero++) {
        if (numero % 2 == 0){
            somaPares +=numero;
        }
        else {
            somaImpares +=numero;
        } 
    }
    printf("Soma dos pares: %d \n", somaPares);
    printf("Soma dos impares: %d", somaImpares);

    return 0;
}