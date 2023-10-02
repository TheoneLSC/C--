#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    void main(){
    setlocale(LC_ALL,"");
    /*
    int a[5];

    printf("Digite um valor:");
    scanf("%d", &a[0]);*/

    int a[5];

    for(int i = 0; i < 5; i++){
        printf("Digite um valor:");
        scanf("%d", &a[i]); //Neste caso i e igual a zero.
    }

    for (int i = 0; i < 5; i++){
        printf("O valor de a na posição %d é igual a %d\n", i, a[i]);
    }/*

        int notas[5] = {14,15,16,17,18};
        printf("Notas na posição 0 é igual a %d\n", notas[0]);
        printf("Notas na posição 0 é igual a %d\n", notas[1]);
        printf("Notas na posição 0 é igual a %d\n", notas[2]);
        printf("Notas na posição 0 é igual a %d\n", notas[3]);
        printf("Notas na posição 0 é igual a %d\n", notas[4]);
    */}
