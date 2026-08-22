#include <stdio.h>

int main()
{
    int array [10];
    // Irei declarar o i dentro do for, dependendo da versão do compilador C pode ocorrer erro de alocação
    // de memória, mas isso não é comum

    for(int i =0; i < 10; i++)
    {
        printf("Entre com o valor da posicao %d: ", (i+1));
        scanf ("%d", &array[i]);
    }
    for( int i = 0; i < 10; i++)
    {
        if((i % 2) == 0){
            printf("\nValor %d esta num indice par e na posição impar", array [i]);
        }
    }

    return 0;
}