#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){
    setlocale(LC_ALL,"");

    int notaTotal;
    printf("Insira o nota total:");
    scanf("%d", &notaTotal);

    switch(notaTotal){
    case 0 ... 5:
        printf("Muito insuf");
            break;
    case 6 ... 10:
        printf("Suficiente");
            break;
    case 11 ... 15:
        printf("Bom");
            break;
    case 16 ... 19:
        printf("Muinto Bom");
            break;
    case 20:
        printf("Exelente");
            break;
    default:
        printf("ERRO porfavor insira un numero inteiro entre 0 a 20");
    }
    }
