#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


    void main(){
    setlocale(LC_ALL,"");

    int num1, num2;

    char opcao;

    printf("insira um numero:");
    scanf("%d", &num1);
    printf("insira o segundo numero:");
    scanf("%d", &num2);
    printf("Qual operação deseja fazer? [+ - x /]");
    scanf(" %c", &opcao); // Adicionar sempre um espaco antes do %c pois no fim de todos as leituras de prints adiciona um \0  (nao visivel) e sem o espaco antes do %c ele lé o \0 e para

    switch(opcao){
        case '+':
                printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case '-':
                printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case 'x':
                printf("%d x %d = %d", num1, num2, num1 * num2);
            break;
        case '/':
                printf("%d / %d = %.2f", num1, num2, (float)num1 / num2);
            break;
        default:
                printf("ERRO");
                break;
    }

    }
