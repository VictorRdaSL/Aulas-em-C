#include <stdio.h>

int main() {
    float matrizMenu [10][4];
    int op = 1, linha = 0;

    while (op > 0) {
        printf ("\n-------------------------------\n");
        printf ("\n----- MENU LANCHONETE NETO ----\n");
        printf ("\n ------- ITEM ------ VLR ------\n");
        printf ("\n -- 1: Coca cola  -- RS  6.50- \n");
        printf ("\n -- 2: X Salada   -- RS 27.50- \n");
        printf ("\n -- 3: Paçoquita  -- RS  2.00- \n");
        printf ("\n -- 4: Pao Quijo  -- RS  5.00- \n");
        printf ("\n Escolha o item pelo numero ou 0 para sair: \n");
        scanf("%d", &op);
        
        switch (op) {
            case 1:
                matrizMenu[linha][0] = 1;
                matrizMenu[linha][1] = 6.50;
                printf("\n Quantas coca colas você deseja?: ");
                scanf("%f", &matrizMenu[linha][2]);
                matrizMenu[linha][3] = matrizMenu[linha][1] * matrizMenu[linha][2];
                linha++; 

            break;
            case 2:
                matrizMenu[linha][0] = 2;
                matrizMenu[linha][1] = 27.50;
                printf("\n Quantos x saladas você deseja?: ");
                scanf("%f", &matrizMenu[linha][2]);
                matrizMenu[linha][3] = matrizMenu[linha][1] * matrizMenu[linha][2];
                linha++;
            break;
            case 3:
                matrizMenu[linha][0] = 3;
                matrizMenu[linha][1] = 2.00;
                printf("\n Quantas paçoquitas você deseja?: ");
                scanf("%f", &matrizMenu[linha][2]);
                matrizMenu[linha][3] = matrizMenu[linha][1] * matrizMenu[linha][2];
                linha++;
            break;
            case 4:
                matrizMenu[linha][0] = 4;
                matrizMenu[linha][1] = 5.00;
                printf("\n Quantos Paes de queijo você deseja?: ");
                scanf("%f", &matrizMenu[linha][2]);
                matrizMenu[linha][3] = matrizMenu[linha][1] * matrizMenu[linha][2];
                linha++;
            break;
            default:
                printf ("\n Escolha uma opção valida! ");
            break;
        }
    }
    for(linha = 0; linha < 10; linha++){
        printf ("\n |%f | RS %f | %f | RS %f |", matrizMenu[linha][0], matrizMenu[linha][1],
            matrizMenu[linha][2], matrizMenu[linha][3] );
    }
    return 0;
}