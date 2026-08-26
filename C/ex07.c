#include <stdio.h>

int main(){
    int nota;
    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota invalida");
    }
    if (nota <= 4){
        printf("Reprovado");
    }
    else if (nota <= 6){
        printf("Regular");
    }
    else if (nota <= 8){
        printf("Bom");
    }
    else if (nota <= 10){
        printf("Excelente");
    }
    else {
        printf("burrão menó kkkkkkkkkkkk");
    }
}
