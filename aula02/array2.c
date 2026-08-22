#include <stdio.h>

int main()
{
    int array[13];
    int i; // a varialvel i remte a indes (índice)
    
    //A estrutura de repetição for irá iniciar o indice em 0; verifique se
    // o conteúdo condiz com a comparação e se condizer entra na laço após o 
    // incremento (aumnetar o valor do índice):
    for(i = 0; i < 13; i++)
    {
        printf("Entre com um numero inteiro: ");
        scanf("%d", &array[i]);
    } // fim do for
    
    printf("Conteúdo dos íncidces 6 e 12: %d - %d", array[6], array[13]);

    return 0;
}
