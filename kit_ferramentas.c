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
    int op, op_area , cont, i, c1, j, c2, c3, aux = 0,  num, segundos, hora, minuto, ano, n, mdc; // Variavel para guardar as opçoes op, cont contador = i e aux = j auxiliar, c1 = contador1
    int d1, dias, meses, d2, m1, m2, a1, a2, a, d, m;
    float num_media, lado, areaquadrado, areatriangulo, arearetangulo, base, altura, resultado;
    float n1,n2;
    char sinal;

    do{

        system (" cls || clear ");

        printf("========== { MENU - KIT DE FERRAMENTAS } ==========");

        printf("\n\nInformar o numero de acordo com a ferramenta que deseja utilizar:\n\n");
        printf("(1) Verificar se o numero e primo\n");
        printf("(2) Calcula a area de uma figura\n");
        printf("(3) Mostrar o enesimo numero da sequencia Fibonacci\n");
        printf("(4) Calcular o fatorial de um numero\n");
        printf("(5) Calcula o valor de x elevado a y\n");
        printf("(6) Calcula a media aritimetica dos numeros digitiados\n");
        printf("(7) Calcula o maximo divisor comum entre dois numeros\n");
        printf("(8) Calculadora\n");
        printf("(9) Calcula a diferenca entre duas datas em dias, meses e anos\n");
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

        // Sequencia de Fibinacci
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

        // Calcula o fatorial
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

        // Calcula x a y
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

        // Calculadora
        else if (op == 8){
            
            resultado = 0;
            j = 0;

            do{

                system(" cls || clear ");


                printf("\n\nDigite um dos simbolos para efetuar a operacao: \n\n");
                printf("Soma [+]\n");
                printf("Subtracao [-]\n");
                printf("Divisao [/]\n");
                printf("Multiplicacao [*]\n");
                printf("Sair [E]\n\n");
                scanf("%c", &sinal);
                getchar();

                system(" cls || clear ");

                switch(sinal){
                    case '+': 
                        printf("\nDigite um valor: ");
                        scanf("%f", &n1); // 1
                        getchar();

                        printf("\nDigite outro valor: ");
                        scanf("%f", &n2);
                        getchar(); // 2 // resultado = 5

                        system(" cls || clear ");

                        if(j == 0){

                            resultado += n1 + n2;
                            printf("\n\nA soma de %0.2f e %0.2f e: %0.2f\n", n1, n2, resultado);

                        }else{

                            printf("\n\nA soma de %0.2f e %0.2f e: %0.2f\n", n1 + n2,resultado, resultado + n1 + n2);
                            resultado += n1 + n2;

                        }

                        printf("\nPressione \"Enter\" para retornar ao menu!\n");

                        getchar();

                    break;

                    case '-':

                        printf("\nDigite um valor: ");
                        scanf("%f", &n1);
                        getchar();

                        printf("\nDigite outro valor: ");
                        scanf("%f", &n2);
                        getchar();

                        system(" cls || clear ");

                        if(j == 0){
                            
                            resultado = n1-n2;
                            printf("\n\nA subtracao de %0.2f e %0.2f e: %0.2f\n", n1,n2,resultado);

                        }else{

                            printf("\n\nA subtracao de %0.2f e %0.2f e: %0.2f\n", n1 - n2, resultado, resultado - (n1 - n2));
                            resultado = resultado - (n1 - n2);

                        }

                        printf("\nPressione \"Enter\" para retornar ao menu!\n");

                        getchar();

                    break;

                    case '/':

                        printf("\nDigite um valor: ");
                        scanf("%f", &n1);
                        getchar();

                        printf("\nDigite outro valor: ");
                        scanf("%f", &n2);
                        getchar();

                        system(" cls || clear ");

                        if (j == 0){
                            
                            resultado = n1 / n2;
                            printf("\n\nA divisao de %0.2f com %0.2f e: %0.2f\n", n1, n2,resultado);
                            
                        }else{

                            printf("\n\nA divisao de %0.2f por %0.2f e: %0.2f\n", resultado,n1/n2, resultado / (n1 /n2));
                            resultado = resultado / (n1 / n2);

                        }

                        printf("\nPressione \"Enter\" para retornar ao menu!\n");

                        getchar();

                    break;

                    case '*':

                        printf("\nDigite um valor: ");
                        scanf("%f", &n1);
                        getchar();

                        printf("\nDigite outro valor: ");
                        scanf("%f", &n2);
                        getchar();

                        system(" cls || clear ");

                        if ( j == 0){

                            resultado = n1*n2;
                            printf("\n\nA multiplicacao de %0.2f por %0.2f e: %0.2f", n1, n2, resultado);

                        }else{

                            printf("\n\nA multiplicacao de %0.2f por %0.2f e: %0.2f", resultado, n1 * n2, resultado * ( n1 * n2));
                            resultado = resultado * ( n1 * n2);

                        }

                        printf("\nPressione \"Enter\" para retornar ao menu!\n");

                        getchar();

                    break;

                }

                if(sinal == 'e'){

                    sinal = 'E';

                }

                j++;

            }while (sinal != 'E');
        }

        // Diferença entre dias meses e anos 
        // Programa em manutenção 
        else if (op == 9){

        printf("O programa esta em manutencao, estamos corrigindo bugs.");
		getchar();
        
		if(1)
		{
			break;
		}

        do{

            system("cls||clear");
			
			printf("\nInforme o dia da primeira data: "); 
			scanf("%i", &d1);
			getchar();
			
        }while(!(d1 > 0 && d1 <= 31));
        
        do{

            system("cls||clear");
			
			printf("\nInforme o mes da primera data: ");
			scanf("%i", &m1);
			getchar();
			
        }while(!(m1 > 0 && m1 <= 12));

        do{

            system("cls||clear");

			printf("\nInforme o ano da primeira data: ");
        	scanf("%i", &a1);
        	getchar();

        }while(!(ano > 0));
        
        
        system("cls||clear");

        do{

            system("cls||clear");

			printf("\nInforme o dia da segunda data: ");
			scanf("%i", &d2);
			getchar();

        }while(!(d2 > 0 && d2 <= 31));

        do{
            
            system("cls||clear");

            printf("\nInforme o mes da segunda data: ");
            scanf("%i", &m2);
            getchar();

        }while (!(m2 > 0 && m2 <= 12));

        do{

            system("cls||clear");

            printf("\nInforme o ano da segunda data: ");
            scanf("%i", &a2);
            getchar();

        }while(!(a2 > 0));

        system("cls||clear");

        // Verifica a data mais antiga e passa para o a2, m2 e o d2
        if (a1 < a2) {

            aux = a1;
            a1 = a2;
            a2 = aux;

            aux = m1;
            m1 = m2;
            m2 = aux;

            aux = d1;
            d1 = d2;
            d2 = aux;

        }
        else if (m1 < m2 && a1 == a2) {
            
            aux = a1;
            a1 = a2;
            a2 = aux;

            aux = m1;
            m1 = m2;
            m2 = aux;

            aux = d1;
            d1 = d2;
            d2 = aux;

        }
        else if (d1 < d2 && m1 == m2) {
            aux = a1;
            a1 = a2;
            a2 = aux;

            aux = m1;
            m1 = m2;
            m2 = aux;

            aux = d1;
            d1 = d2;
            d2 = aux;
        }

        a = 0;
        d = 0;
        m = 0; 

    printf("As datas digitadas foram: \n");
	printf("%i/%i/%i\n",d2,m2,a2);
    printf("%i/%i/%i\n\n",d1,m2,a1);

    // Pega a data mais antiga e atualiza até a data atual
    while((d1 != d2 || m1 != m2 || a1 != a2)) { // 1/03/2020  e 28 / 02 /2020

        // Identifica quantos dias o mes tem
        switch (m2) {

            case 1:
                dias = 31;
            break;

            case 2:
                dias = 28;

                if ( a2 % 4 == 0 ) {

                    dias = 29;

                }

            break;

            case 3:
                dias = 31;
            break;

            case 4:
                dias = 30;
            break;

            case 5:
                dias = 31;
            break;

            case 6:
                dias = 30;
            break;

            case 7:
                dias = 31;
            break;

            case 8:
                dias = 31;
            break;

            case 9:
                dias = 30;
            break;

            case 10:
                dias = 31;
            break;

            case 11:
                dias = 30;
            break;

            case 12:
                dias = 31;
            break;

        }
        
        // Verifica se o mes acaabou
        if (d2 > dias) { 
            
            d2 = 1; 
            m2++;

        } 
        
        // Verifica se o ano acabou
        if (m2 > 12) {

            m2 = 1;
            a2++;
            
        }

        
        if (m2 == 3)  { // Cuida de quando o mes ta passando de fevereiro pra março 

            if (a2 % 4 == 0 && d > 29) { // Verifica se o ano é bissexto, se for só ira completar o mes com 29 dias

                m++;
                d = 0;

            }
            else if (a2 % 4 != 0 && d >= 28 && d2 < 29) { // Verifica se o ano não é bissexto, se não for ira completar com 28 dias

                m++;  
                d = 0;

            }

        }
        else { 

            if ((m2 == 8 ||  m2 == 1 ) && (d >= 31) && (d2 < 31) ) {  // Não pode ser
    
                m++;
                d = 0;

            }

            else if (m2 < 8) {
                    
                if (m2 % 2 == 0 && d >= 31) {

                    m++;
                    d = 0;

                }
                else if (m2 != 1 && m2 % 2 != 0 && d >= 30 && d2 < 31 ) {

                    m++;
                    d = 0;
                    
                } 

            
            }
            else if (m2 < 13 && m2 != 8) {

                if (m2 % 2 == 0 && d >= 30 && d2 < 31) {

                    m++;
                    d = 0;

                }
                else if (m2 % 2 != 0 && d >= 31 ) {

                    m++;
                    d = 0;
                    
                }

            }  
        
        }

        if (m >= 12) {
            a++;
            m = 0;
        }

        // Atualiza os dias
        d2++;
        d++;
    }

    printf("\nSe passaram %i anos, %i meses, %i dias entre essas duas datas.\n", a, m, d);

    printf("\nPressione \"Enter\" para retornar ao menu!\n");

    getchar();

    system(" cls || clear ");

    }

    if(op == 10){

    printf("Informe o numero que deseja converter em numero Romano: \n\n");
    scanf("%d", &num);
    
    getchar();

    // Para caso o usuário digite um número acima de 3000 ou 0, irá cair no while, tabela pego no site https://www.todamateria.com.br/numeros-romanos/
    while (num > 3000 || num == 0) {

        system(" cls || clear ");

        printf("Favor, informar um numero menor que 3000 e diferente de 0, digite novamente: \n\n");
        scanf("%d", &num);

        getchar();
    }
    
    system(" cls || clear ");
    printf("O numero %d em romano e: ", num);
    
    //deve verificar cada dígito do número para poder converter, ao final da verificação, é retirado do dígito da esquerda
    
    if(num > 999) { 
        switch (num / 1000) {
            case 1:
                printf("M");
                break;
            case 2:
                printf("MM");
                break;
        }
        
        num = num % 1000;
    }
    
    if(num > 99) { 
        switch (num / 100) {
            case 1:
                printf("C");
                break;
            case 2:
                printf("CC");
                break;
            case 3:
                printf("CCC");
                break;
            case 4:
                printf("CD");
                break;
            case 5:
                printf("D");
                break;
            case 6:
                printf("DC");
                break;
            case 7:
                printf("DCC");
                break;
            case 8:
                printf("DCCC");
                break;
            case 9:
                printf("CM");
                break;
        }
        
        num = num % 100;
    }
    
    if(num > 9) { 
        switch (num / 10) {
            case 1:
                printf("X");
                break;
            case 2:
                printf("XX");
                break;
            case 3:
                printf("XXX");
                break;
            case 4:
                printf("XL");
                break;
            case 5:
                printf("L");
                break;
            case 6:
                printf("LX");
                break;
            case 7:
                printf("LXX");
                break;
            case 8:
                printf("LXXX");
                break;
            case 9:
                printf("XC");
                break;
        }
        
        num = num % 10;
    }

    if(num > 0) { 
        switch (num) {
            case 1:
                printf("I");
                break;
            case 2:
                printf("II");
                break;
            case 3:
                printf("III");
                break;
            case 4:
                printf("IV");
                break;
            case 5:
                printf("V");
                break;
            case 6:
                printf("VI");
                break;
            case 7:
                printf("VII");
                break;
            case 8:
                printf("VIII");
                break;
            case 9:
                printf("IX");
                break;
        }
    }
    printf("\n\nPressione \"Enter\" para retornar ao menu!\n");
    getchar();

    system(" cls || clear ");

}

    if(op == 11){

        printf("Informe o tempo em segundos: ");
        scanf("%d", &segundos);
        getchar();

        minuto = segundos / 60; // passa pra minuto
        segundos = segundos % 60; // segundos
        hora = minuto / 60; // passa pra horas
        minuto = minuto % 60; // minutos

        system("cls||clear");

        printf("\n\n%d horas, %d minutos e %d segundos.\n", hora,minuto,segundos);

        printf("\nPressione \"Enter\" para retornar ao menu!\n");

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