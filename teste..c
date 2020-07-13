#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int expo, i; //expoente = y
    float base, resultado; //base = x

    printf("Digite um numero para a base: ");
    scanf("%f", &base);

    printf("\nDigite um expoente natural: "); // expoente inteiro não negativo
    scanf("%i", &expo);

    while (expo < 0) {
        printf("Informação invalida, digite novamente: ");
        scanf("%i", &expo);
    }

    resultado = 1; // inicialização

    for (i = 1; i <= expo; i++) {

        resultado *= base; 
    }

    printf("O resultado de %0.2f elevado a %i e: %0.2f\n", base, expo, resultado);

    return 0;
}