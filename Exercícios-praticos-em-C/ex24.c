#include <stdio.h>

int main(){
    for (int numero = 1; numero <= 20; numero++) {

        if (numero % 2 != 0) {
            printf("%d - impar \n", numero);
        }
        else {
            printf("%d - par \n", numero);
        }  
    }
    return 0;
}