 
#include <stdio.h> 
#include <stdlib.h> 

/*
    Trabalho para a disciplina Tópicos especiais (SIN 494)
    Alunos: 
    Carlos Eduardo Máximo, João Pedro Pereira da Silva e Pedro Emanuel de Avelar Sousa de Almeida
    Matricula: 
     6962, 5199 e 6965 (respectivamente aos nomes)
    Nome do Programa:
    Kit de Ferramentas
*/

int main ()
{
    int op, op_area , cont, i, c1, j, c2, c3, aux = 0,  num, hora, minuto, ano, n, mdc; // Variavel para guardar as opçoes op, cont contador = i e aux = j auxiliar, c1 = contador1
    float num_media, lado, areaquadrado, areatriangulo, arearetangulo, base, altura, resultado;

    do{

        system (" cls || clear ");

        printf("========== { MENU - KIT DE FERRAMENTAS }==========");

        printf("\n\nInformar o numero de acordo com a ferramenta que deseja utilizar:\n\n");
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
        printf("(12) Para encerrar o programa!\n\n");
        scanf("%d", &op);

        getchar();

        system (" cls || clear ");

        // Verifica se o número é primo
        if (op == 1){
            aux = 0;

            printf("\nDigite um valor: ");  
            scanf("%i", &num);

            printf ("\nPressione \"Enter\" para continuar o programa.\n");

            getchar();

            system (" cls || clear ");
        
            for (cont = 1; cont <= num; cont++){ 

                if (num % cont == 0){ 
                    
                    aux++;

                }

            }

            if (aux == 2){
                printf("O valor digitado e primo!\n");
            }else{
                printf("O valor digitado nao e primo!\n");
            }

            printf ("\nPressione \"Enter\" para retornar ao Menu!\n");

            getchar();

        }
        
        // Programa para calcular area da figura.

        else if (op == 2) {
            
            system(" cls || clear ");

            op_area = 0;

            printf("\nEscolha uma das figuras abaixo:\n ");
            printf("\n(1) Calcular a Area do Triangulo");
            printf("\n(2) Calcular a Area do Quadrado");
            printf("\n(3) Calcular a Area do Retangulo\n\n");
            scanf("%d", &op_area);// Variavel que guarda a opção que o usuario digitou. 

            getchar();

            system(" cls || clear ");

            switch (op_area) {

                case 1:
                    printf("Informe a base da figura: ");
                    scanf("%f", &base);

                    printf("\nInfome a altura da figura: ");
                    scanf("%f", &altura);

                    getchar();

                    system (" cls || clear");

                    areatriangulo = ( base * altura ) / 2;

                    printf("A area do Trinagulo calculada e: %0.2f\n", areatriangulo);

                    printf ("\nPressione \"Enter\" para retornar ao Menu!\n");

                    getchar();
                break;

                case 2:
                    printf("Informe o valor do lado do quadrado: ");
                    scanf("%f", &lado);

                    getchar();

                    system(" cls || clear ");

                    areaquadrado =  lado * lado;

                    printf("A area do Quadrado calculada e: %0.2f\n", areaquadrado);

                    printf ("\nPressione \"Enter\" para retornar ao Menu!\n");

                    getchar();
                break;

                case 3:
                    printf("Informe a base da figura: ");
                    scanf("%f", &base);

                    printf("\nInfome a altura da figura: ");
                    scanf("%f", &altura);

                    getchar();

                    system(" cls || clear ");

                    arearetangulo = base * altura; 

                    printf("A area do Retangulo calculada e: %0.2f\n", arearetangulo);

                    printf ("\nPressione \"Enter\" para retornar ao Menu!\n");

                    getchar();
                break;

                default:
                    printf("A opçao digitada e invalida\n"); 

                    printf ("\nPressione \"Enter\" para retornar ao Menu!\n");

                    getchar();
                break;

        }

            system(" cls || clear ");
    
        }

        else if (op == 3) {

            printf("Qual elemento da sequencia de Fibonacci voce deseja saber?\n\n");
            scanf("%i", &n);

            getchar();

            system(" cls || clear ");

            c1 = 0; // Atribuição do valor de c1 = 0
            c2 = 1;

            for (i = 1 ; i < n; i++ ) {
            
                c3 = c1 + c2;

                c1 = c2;
                c2 = c3;

            }

            printf("O %i° elemento e: %i\n", n,c1);

            printf ("\nPressione \"Enter\" para retornar ao Menu!\n");

            getchar();
        
        }

        else if (op == 4) {
            
            printf("\nInforme um numero para calcular seu fatorial: \n\n");
            scanf("%d", &num);
            getchar();

            system(" cls || clear ");

            c1 = 1;

            for(i = num;i > 0; i--){   // num = 5 // i = 5// 5 > 0; 
                
                c1 = i * c1; 
                
                // c1 = 5 * 1
                // c1 = 5
                // i = 4 
                // 5 * 4
                // c1 = 20
                // 20 * 3
                // c1 = 60
                // 60 * 2
                // c1 = 120
                // 120 * 1
                // c1 = 120

            }
            
            printf("O fatorial de %d e: %d\n", num,c1);

            printf ("\nPressione \"Enter\" para retornar ao Menu!\n");

            getchar();
            
        }

        else if (op == 5) {

            system (" cls || clear ");

            printf("Digite um numero para a base: ");
            scanf("%f", &base);

            printf ("\nPressione \"Enter\" para continuar!\n");

            getchar();

            system(" cls || clear ");

            printf("Digite um expoente natural: "); // expoente inteiro não negativo 
            scanf("%i", &c2);

            getchar();

            // Para caso o usuário digite um número negativo, irá cair no while
            while (c2 < 0) {

                system(" cls || clear ");

                printf("Informação invalida, digite novamente: ");
                scanf("%i", &c2);

                getchar();

            }

            getchar();

            system(" cls || clear ");

            resultado = 1; // inicialização 

            for (i = 1; i <= c2; i++) { 
                resultado *= base; 
            }

            printf("O resultado de %0.2f elevado a %i e: %0.2f\n", base, c2, resultado);

            printf ("\nPressione \"Enter\" para retornar ao Menu!\n");

            getchar();

        }

        // Calcula a média dos números
        else if(op == 6){

            resultado = 0;
            c1 = 0;

            printf("Caso queria sair do programa, digite 0.\n\n");

            do{
                        
                printf("Informe um valor: ");
                scanf("%f", &num_media);
                getchar();

                if (num_media != 0){

                    resultado += num_media; 
                    c1++;

                }


            }while(num_media != 0);

            system(" cls || clear ");
            
            if(c1 != 0){
                printf("\n\nA media aritimetica dos numeros digitados e: %0.2f\n\n", resultado / c1);

                printf("Pressione \"Enter\" para retornar ao Menu.\n\n");

                getchar();
            }

        }

        // Calcula o MDC
        else if (op == 7) {

            printf("Digite um numero:  ");
            scanf("%i", &num);

            printf("Digite outro numero:  ");
            scanf("%i", &n);

            getchar();

            system(" cls || clear ");

            aux = 0; 
            mdc = 1;

            // Este for faz a fatoração
            for (c1 = 1; num > 1 || n > 1; c1++) {

            // Abaixo o código verifca e imprime um numero primo

            j = 0;

            // O for verifica se o numero temresto igual a 0
            for ( i = 1;  i <= c1; i++ ) { 

                if ( c1 % i == 0 ) {

                    j++;

                }

            }

            if ( j == 2 ) {

                aux++;

                if ( num % c1 == 0 && n % c1 == 0) {

                    printf("%i, %i | %i\n", num, n, c1);

                    mdc *= c1;

                    num /= c1;
                    n /= c1;

                    c1 = 1; // faz voltar os numeros

                }
                else if ( num % c1 == 0 && !  (n % c1 == 0 )) {

                    printf("%i, %i | %i\n", num, n, c1);

                    num /= c1;

                    c1 = 1; // faz voltar os numeros

                }
                else if ( n % c1 == 0 && ! (num % c1 == 0 )) {

                    printf("%i, %i | %i\n", num, n, c1);

                    n /= c1;

                    c1 = 1;

                }
                
            }


            }

            printf("%i, %i |   \n", num, n);

            printf("\nO MDC dos numeros digitados e: %i\n\n", mdc);

            printf("Pressione \"Enter\" para retornar ao Menu!\n");

            getchar();

            
        }

    }while (op != 12);

    system(" cls || clear ");

    printf("Programa criado por: \n");
    printf("\nCarlos Eduardo Maximo - (6962)");
    printf("\nPedro Emanuel de Avelar Sousa de Almeida - (6965)");
    printf("\nJoao Pedro Pereira da Silva - (5199)");

    printf("\n\nAuxiliado tambem por: \n");
    printf("\nJoao Lucas Mayrinck D Oliveira;\n\n");

    printf("\n\nPressione \"Enter\" para finalizar o programa!\n");
        
    getchar();

    system(" cls || clear ");

    return 0;
}