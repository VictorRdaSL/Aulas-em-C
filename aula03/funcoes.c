#include <stdio.h>

// Declarando as funções:
void seApresentar();
float retornaSoma();

int main() {
    // Invocando a função seApresentar():
    seApresentar();
    // A variável resultado guarda o que vier da função retornaSoma
    float resultado = retornaSoma();

    // Mostrando conteúdo da variavel resultado:
    printf("\nResultado da soma: %.2f", resultado);

    return 0;
}
float retornaSoma() {
    float numA = 0.0, numB = 0.0, result = 0.0;
    printf("\n Digite o primeiro numero: ");
    scanf("%f", &numA);
    printf("\n Digite o segundo numero: ");
    scanf("%f", &numB);

    return numA + numB;
} //  fim do retornarSoma

void seApresentar () {
    printf ("\n Olá, Mundo!");
    // Perceba que não tem o return pois a função tem 
    //o tipo de retorno definido como vazio (void)
} // fim da seApresentar()