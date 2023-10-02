#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    void main(){
    setlocale(LC_ALL,"");

    //Programa com uma contagem crrescent
/*
    int num1;
    printf("Digite um numero para saber a tabuada");
    scanf("%d", &num1);

    for(int cont = 0; cont <= 10; cont++){
        printf("%d x %d = %d\n", num1, cont, num1 * cont);
}*/


/* LOOP INFINITO
    int num1, num2, num3=1;

    printf("Digite um numero");
    scanf("%d", &num1);
    printf("Digite segundo numeor");
    scanf("%d", &num2);

    while  (num3 <= num2){
        printf("%d x %d = %d\n", num1, num2, num1*num3);

    }*/

    int opcao;

    while(opcao != 3){
    printf("Escolha a sua opção\n");
    printf("[1] JOGAR\n");
    printf("[2] saber mais\n");
    printf("[£] sair\n");
    scanf("%d", &opcao);
    printf("NAO ESCOLHEI O [3] SAIR\n");
    }
    printf("Escolheu sair");
}
