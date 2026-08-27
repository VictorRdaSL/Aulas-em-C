#include <stdio.h>

int main() {
    int senha;
    printf("Digite a senha: ");
    scanf("%d", &senha);
    while (senha != 2026) {
        printf("Senha incorreta!\n");
        printf("Digite novamente a senha: ");
        scanf("%d", &senha);
    }
    printf("Acesso permitido!");
    return 0;
}