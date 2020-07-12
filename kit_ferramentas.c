#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> // Biblioteca necessária para usar o setlocale()

/*
    Trabalho para a disciplina Tópicos especiais (SIN 494)

    Alunos: 
    Carlos Eduardo Máximo, João Silva e 
    Pedro Emanuel de Avelar Sousa de Almeida

    Matricula: 
    5199 ,6962 e 6965


    Nome do Programa:
    Kit de Ferramentas
*/

int main ()
{
    int op, cont, aux = 0,  num; // Variavel para guardar as opçoes op, cont contador = i e aux = j auxiliar
    float area;

do {

    printf("\n\nInformar o numero de acordo com a ferramenta que deseja utilizar:\n");
    printf("(1) Verificar se o numero e primo\n");
    printf("(2) Calcula a area de uma figura\n");
    printf("(3) Mostrar o enesimo numero da sequencia Fibonacci\n");
    printf("(4) Calcular o fatorial de um numero\n");
    printf("(5) Calcula o valor de x elevado a y\n");
    printf("(6) Calcula a media aritimetica dos numeros digitiados\n");
    printf("(7) Calcula o maximo divisor comum entre dois numeros\n");
    printf("(8) Calculadora\n");
    printf("(9) Calcula a diferença entre duas datas em anos, meses\n");
    printf("(10) Converter um numero decimal inteiro para romano\n");
    printf("(11) Converta o tempo dado em segundos para horas, minutos e segundos\n");
    printf("(12) Para encerrar o programa!\n");
    scanf("%d", &op);

    if (op == 1) { 
        aux = 0; // Quando inicializar o programa o aux vai zerar

        printf("\n\nDigite um valor: ");  
        scanf("%i", &num);
    
        for (cont = 1; cont <= num; cont++) {

        if (num % cont == 0) {
            aux++;
        }

        }

        if (aux == 2) {
            printf("O valor digitado e primo!\n");
        }else {
            printf("O valor digitado nao e primo!\n");
        }

        sleep(5);

    }

}while (op != 12);
     
    return 0;
}